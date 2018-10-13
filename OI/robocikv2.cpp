#include <iostream>

using namespace std;

int main() {
    unsigned short int problematicValue=7;//gdy przedzial jest niedomkniety na poczatku a domkniety na koncu (0,1> to musze cos zrobic zeby na poczatku liczylo miejsce x=0 y=0
    unsigned int n;
    long long int t;
    cin>>n>>t;
    int tab[n];
    for(int i=0;i<n;i++){
        cin>>tab[i];
    }
    unsigned int x, y;
    cin>>x>>y;
    unsigned int ppx=0, pkx=0, ppy=0, pky=0; //pozycja poczatkowa x, pozycja koncowa x, pozycja poczatkowa y, pozycja koncowa y potrzebne do rozpatrzenia zakresu
    unsigned short int direction=0;
    unsigned short place=0;
    while(t>0){
    for(int i=0;i<n;i++){
            if(t<0){
                break;
            }
            t-=tab[i];
            switch(direction){
            case 0:
                pky+=tab[i];
                if(problematicValue==7){
                    if(ppx==x && y<=pky && y>=ppy && t>0){
                    place+=1;
                    ppy=pky;
                    }
                    else{
                    int tt=t+tab[i];
                    if(ppx==x && y<=pky&&y>ppy && tt>=y){
                        place+=1;
                        }
                    ppy=pky;
                }
                }
                else{
                if(ppx==x && y<=pky && y>ppy && t>0){
                    place+=1;
                    ppy=pky;
                    }
                    else{
                    int tt=t+tab[i];//zmienna potrzeba zeby program przestal dzialac po tym jak rzeczywiscie sie czas skonczy, gdybym wykorzystal t w przykladzie ponizej program mialby czas dodatni przez co robicik by szedl dalej
                    if(ppx==x && y<=pky&&y>ppy && tt>=y){
                        place+=1;
                        }
                    ppy=pky;
                    }
                    }
                break;

            case 1:
                pkx+=tab[i];
                if(ppy==y && x<=pkx&&x>ppx && t>0){
                    place+=1;
                    ppx=pkx;
                    }
                    else{
                    int tt=t+tab[i];
                    if(ppy==y && x<=pkx&&x>ppx && tt>=x){
                        place+=1;
                        }
                    ppx=pkx;
                    }
                break;

            case 2:
                pky-=tab[i];
                if(ppx==x && y>=pky&&y<ppy && t>0){
                    place+=1;
                    ppy=pky;
                    }
                    else{
                    int tt=t+tab[i];
                    if(ppx==x && y>=pky&&y>ppy && tt>=y){
                        place+=1;
                        }
                    ppy=pky;
                    }
                break;

            case 3:
                pkx-=tab[i];
                if(ppy==y && x>=pkx&&x<ppx && t>0){
                    place+=1;
                    ppx=pkx;
                    }
                    else{
                    int tt=t+tab[i];
                    if(ppy==y && x>=pkx&&x>ppx && tt>=x){
                        place+=1;
                        }
                    ppx=pkx;
                    }
                break;
            }
            problematicValue++;
            direction=(direction+1)%4;
            t--;
        }
        }
        cout<<place;
}
