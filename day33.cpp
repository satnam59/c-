#include<iostream>
using namespace std;
void table(int n)
{
    int i;
    for(i=0;i<=10;i++)
    {
        cout<<n<<"*"<<i<<"="<<n*i<<endl;
    }
}
int main()
{
    int n;
    cout<<" Enter Your Number =";
    cin>>n;
    table(n);
}
