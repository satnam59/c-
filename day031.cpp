#include<iostream>
using namespace std;
int main()

{
    int i,j,k;
    int a[3][3][3];
                    cout<<"Enter elments in array "<<endl;

                    for(i=0;i<=2;i++)
                    {
                        for(j=0;j<=2;j++)
                        {
                            for(k=0;k<=2;k++)
                            {
                                cin>>a[i][j][k];

                            }

                        }

                    }
                    cout<<endl;
                    cout<<"showing array"<<endl;

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
                    cout<<endl;
}
