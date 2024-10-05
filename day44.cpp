o#include<iostream>
using namespace std;
int main()
{
    int ar[3][3]={{10,20,30},
                    {40,50,60},
                    {70,80,90}
                };
    int r,c;
    int *p;
    for(r=0;r<=2;r++)
    {
        for(c=0;c<=2;c++)
        {
            p=&ar[r][c];
            cout<<"\t"<<ar[r][c];
        }
        cout<<endl;
    }
}

