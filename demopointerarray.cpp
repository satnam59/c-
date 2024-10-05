#include<iostream>
using namespace std;
int main()
{
    int ar[]={10,20,30,40,50};
    int i;
    int *p;
    p=ar;
    for(i=0;i<=4;i++)
    {
        cout<<"Address ="<<uintptr_t(p+i)<<" Value="<<*(p+i)<<endl;
    }
}
