#include<iostream>
using namespace std;
int main()
{
    int ar[3][3]={{10,20,30},
                {40,50,60},
                {70,80,90}
                };

                int r,c;
                for(r=0;r<=2;r++)
                {
                    for(c=0;c<=2;c++)
                    {
                        if(r!=c)
                        cout<<0<<" ";

                        else
                        cout<<ar[r][c]<<" ";
                    }
                  cout<<endl;
                }
}

