#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<" Enter the value of a:";
    cin>>a;
    cout<<"\n Enter the value of b:";
    cin>>b;
    cout<<"\n Enter the value of c:";
    cin>>c;
    if(a>b)
    {
        if(a>c)
        {
            cout<<" a is the greatest number :"<<a;
        }
        else
        {
            cout<<" c is the greatest number :"<<c;
        }
    }
    else
    {
        if(b>c)
        {
            cout<<" b is the greatest number :"<<b;
        }
        else
        {
            cout<<" c is the greatest number :"<<c;
        }
    }
}
