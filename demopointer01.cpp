#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int *p;
    cout<<"Value of a="<<a<<endl;
    cout<<"Address of a (Hexadecimal)="<<&a<<endl;
    cout<<"Address of a (Decimal)="<<uintptr_t(&a)<<endl;

    //passing address of a to pointer
    p=&a;
    cout<<"Value of a using pointer="<<*p<<endl;
    cout<<"Address of a (Hexadecimal) using pointer="<<p<<endl;
    cout<<"Address of a (Decimal) using pointer="<<uintptr_t(p)<<endl;
    cout<<"Address of pointer (Decimal)="<<uintptr_t(&p)<<endl;

    //making changes in pointer
    *p=200;
    cout<<"Value of a after made changes="<<a<<endl;


}

