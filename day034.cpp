#include<iostream>
using namespace std;
void swap(int a,int b)
{
    int temp=0;
    temp=a;
    a=b;
    b=temp;
    cout<<"value of x and y after swapping : "<<a<<"\t"<<b;
}
int main()
{
    int x,y;
    cout<<"Enter the value of x and y=";
    cin>>x>>y;
    swap(x,y);
}
