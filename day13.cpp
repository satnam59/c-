#include<iostream>
using namespace std;
int main()
{
    int x,y,z;
    cout<<" Enter the value of first number :";

    cin>>x;
    cout<<"\n Enter the value of second number :";
    cin>>y;
    cout<<"\n Enter the value of third number :";
    cin>>z;
    if(x>y&&x>z)
    {
        cout<<"\t"<<x<<" is the greatest ";
    }
    else if(y>z&&y>x)
    {
        cout<<"\t"<<y<<" is the greatest";
    }
    else
    {
        cout<<"\t"<<z<<" is the greatest";
    }
}
