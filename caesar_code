#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a, k;
    cin>>a>>k;
    string kod1="abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz";
    string kod2="ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string rkod1="zyxwvutsrqponmlkjihgfedcbazyxwvutsrqponmlkjihgfedcba";
    string rkod2="ZYXWVUTSRQPONMLKJIHGFEDCBAZYXWVUTSRQPONMLKJIHGFEDCBA";
    string znaki=",.<>?-_;:*/\|!@#$%^&*)(][}{'`+1234567890";
    string in;
    cin>>in;
    bool found=false;
    int k1 = kod1.size(), v2 = in.size(), v3 = znaki.size(), k2 = kod2.size(), rk1 = rkod1.size(), rk2 = rkod2.size();
    if(a==1)
    {
        for(int i=0;i<v2;i++)
        {
            for(int j=0;j<k1;j++)
            {
                if(kod1[j]==in[i])
                {
                  cout<<kod1[j+k];
                  found=true;
                  break;
                }
                  else{
                  found=false;}

            }
                if(found==false)
                    {
                    for(int j2=0;j2<k2;j2++)
                        {
                        if(kod2[j2]==in[i])
                                {
                           found=true;
                           cout<<kod2[j2+k];
                           break;
                                }
                           else{
                           found=false;}
                        }
                        if(found==false)
                            {
                    for(int l=0;l<v3;l++)
                                    {


                    if(znaki[l]==in[i])
                                        {
                        found=true;
                        cout<<znaki[l];
                        if(found==true)
                        break;
                                        }
                                    }

                            }

                    }
        }
    }
//
//
//
    if(a==2)
    {
        for(int i=0;i<v2;i++)
        {
            for(int j=0;j<rk1;j++)
            {
                if(rkod1[j]==in[i])
                {
                  cout<<rkod1[j+k];
                  found=true;
                  break;
                }
                  else{
                  found=false;}

            }
                if(found==false)
                    {
                    for(int j2=0;j2<rk2;j2++)
                        {
                        if(rkod2[j2]==in[i])
                                {
                           found=true;
                           cout<<rkod2[j2+k];
                           break;
                                }
                           else{
                           found=false;}
                        }
                        if(found==false)
                            {
                    for(int l=0;l<v3;l++)
                                    {


                    if(znaki[l]==in[i])
                                        {
                        found=true;
                        cout<<znaki[l];
                        if(found==true)
                        break;
                                        }
                                    }

                            }

                    }
        }
    }
}
