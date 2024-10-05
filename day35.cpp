#include<iostream>
using namespace std;
int even(int a)
{
    if(a%2==0)
        return 1;
    else
        return 0;
}
int main()
{
    int x,m;
    cout<<"Enter the value of x =";
    cin>>x;
    m=even(x);
    if(m==1)
       cout<<"no. is even";
    if (m==0)
       cout<<"no. is odd";
}
