#include<iostream>
using namespace std;
int main()
{
        int a=10;
        int *p;
        int **pp;
        cout<<"Value of a="<<a<<endl;
        p=&a;
        cout<<"Value of p="<<*p<<endl;
        pp=&p;
        cout<<"Value of pp"<<**pp;
}

