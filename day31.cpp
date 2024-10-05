
#include<iostream>
using namespace std;
int main()
{
    int i,j,k;
    int a[3][3][3]={
                    {{1,4,6},{2,4,3},{7,8,2}},
                    {{1,5,9},{3,8,2},{6,1,0}},
                    {{1,9,4,},{3,6,3},{4,2,8}}
                    };

                    for(i=0;i<=2;i++)
                    {
                        for(j=0;j<=2;j++)
                        {
                            for(k=0;k<=2;k++)
                            {
                                cout<<a[i][j][k]<<" ";
                            }
                            cout<<endl;
                        }
                        cout<<endl;
                    }
}
