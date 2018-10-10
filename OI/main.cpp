#include <iostream>

using namespace std;

int way=0;
int place=0;

int main()
{
    unsigned int n, t;
    cin>>n>>t;
    int t[n];
    for(int i=0;i<n;++i)
        cin>>t[i];
    int x=0,y=0;
    int xx,yy;
    cin>>xx>>yy;
    while(t!=0)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<t[i];++j)
            {
                if(xx==x&&yy==y)
                    place+=1;
                switch (way)
                {
                    case 0:
                    y+=1;
                    t-=1;
                    break;
                    case 1:
                    x+=1;
                    t-=1;
                    break;
                    case 2:
                    y-=1;
                    t-=1;
                    break;
                    case 3:
                    x-=1;
                    t-=1;
                    break;
                }
                if(t==0){break;}
            }
            way=(way+1)%4;
            if(t==0){break;}
        }

    }
    cout<<place;
}
