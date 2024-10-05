#include<iostream>
using namespace std;
int main()
{
    int x=10,y=20;
    cout<<"Value of x before swap="<<x<<endl;
    cout<<"Value of y before swap="<<y<<endl;
    x=x^y;
    y=x^y;
    x=x^y;
    cout<<"Value of x after swap="<<x<<endl;
    cout<<"Value of y after swap="<<y;

}
