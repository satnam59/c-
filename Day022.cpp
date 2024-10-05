#include<iostream>
using namespace std;
int main()
{
    int no,rem,rev=0;
    cout<<"Enter your number=";
    cin>>no;
    for(;no>0;)
    {
        rem=no%10;
        no=no/10;
        rev=rev*10+rem;

    }
    cout<<rev;
}
