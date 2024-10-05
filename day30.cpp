#include<iostream>
using namespace std;
int main()
{
    int ar[3][3]={{1,2,3},
                {4,5,6},
                {7,8,9}
                };
    int a[3][3]={{2,3,4},
                 {5,6,7},
                 {3,2,1}
                 };

                int r,c,j,d;
                int res[3][3]={0};

                    for(r=0;r<=2;r++)
                    {
                         for(c=0;c<=2;c++)
                         {
                           for(j=0;j<=2;j++)
                           {
                               res[r][c]=res[r][c]+(ar[r][j]*a[j][c]);
                           }

                         }
                    }


                    for(int i=0;i<=2;i++){
                        for(int j=0;j<=2;j++){
                            cout<<res[i][j]<<" ";
                        }
                        cout<<endl;
                    }
}

