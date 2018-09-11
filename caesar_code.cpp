#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

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

char shiftLetter(char letter, bool isCapital, int offset) {
    int firstCharacterIndex;
    if(isCapital) {
        firstCharacterIndex = (int) 'A';
    } else {
        firstCharacterIndex = (int) 'a';
    }
    int characterIndex = (int) letter;
    int transformedCharacterIndex = ((ALPHABET_SIZE + characterIndex - firstCharacterIndex + offset) % ALPHABET_SIZE) + firstCharacterIndex;
    return ((char)transformedCharacterIndex);
}

char shiftCharacter(char c, int offset) {
    if(isSmallLetter(c)) {
        return shiftLetter(c, false, offset);
    } else if(isCapitalLetter(c)) {
        return shiftLetter(c, true, offset);
    } else {
        return c; // print it as it is
    }
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

    for(int i = 0; i < inputSize; i++) {
        if(a == 1) {
            cout << shiftCharacter(in[i], k);
        } else {
            cout << shiftCharacter(in[i], -k);
        }
    }
    return EXIT_SUCCESS;
}
