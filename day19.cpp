#include<iostream>
using namespace std;
int main()
{
    int n,i=1;
    cout<<"Enter any number ";
    cin>>n;
    table:
    cout<<n<<"*"<<i<<"="<<n*i<<endl;
    i++;
    tableout:
    if(i<=10)
    {
        goto table;
    }
    else
    {
        goto tableout;
    }
}
