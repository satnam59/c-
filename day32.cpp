#include<iostream>
using namespace std;
int cube(int a)
{
    return a*a*a;
}

int main()
{
    int x;
    int result;
    cout<<"Enter two numbers=";
    cin>>x;
    result=cube(x);
    cout<<result;
}
