#include <iostream>
#include <string>
#include <stdlib.h> // TODO should be changed to cstdlib instead

using namespace std;

typedef char( * actionFunction )(char, int);

const int ALPHABET_SIZE = 26;

void validateA(int a) {
    if(a != 1 && a != 2) {
        cout << "First parameter must be either 1 or 2";
        exit (EXIT_FAILURE);
    }
}

void validateK(int k) {
    if ( k < 1 || k > 25) {
        cout << "The parameter \'k\' must be from [1,25] range";
        exit (EXIT_FAILURE);
    }
}

bool isSmallLetter(char c) {
    return c >= 'a' && c <= 'z';
}

bool isCapitalLetter(char c) {
    return c >= 'A' && c <= 'Z';
}

char shiftCharacter(char c, int offset) {
    int characterIndex = (int) c;
    if(isSmallLetter(c)) {
        int firstCharacterIndex = (int) 'a';
        int transformedCharacterIndex = ((ALPHABET_SIZE + characterIndex - firstCharacterIndex + offset) % ALPHABET_SIZE) + firstCharacterIndex;
        return ((char)transformedCharacterIndex);
    } else if(isCapitalLetter(c)) {
        int firstCharacterIndex = (int) 'A';
        int transformedCharacterIndex = ((ALPHABET_SIZE + characterIndex - firstCharacterIndex + offset) % ALPHABET_SIZE) + firstCharacterIndex;
        return ((char)transformedCharacterIndex);
    } else {
        return c; // print it as it is
    }
}

char encode(char c, int offset) {
    return shiftCharacter(c, offset);
}

char decode(char c, int offset) {
    return shiftCharacter(c, -offset);
}

void processCharacter(char c, int offset, char( * action )(char, int)) {
    cout << action(c, offset);
}

int main() {

    int a;
    cin >> a;
    validateA(a);

    int k;
    cin >> k;
    validateK(k);

    string in;
    cin >> in;
    int inputSize = in.size();

    actionFunction action;
    if(a == 1) {
        action = encode;
    } else if (a == 2) {
        action = decode;
    } else {
        exit(EXIT_FAILURE);
    }

    for(int i = 0; i < inputSize; i++) {
        processCharacter(in[i], k, action);
        // TODO simplify me
        // cout << action(in[i], k);
    }
    return EXIT_SUCCESS;
}
