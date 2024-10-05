#include<iostream>
using namespace std;
int factNormal(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
      f=f*i;
    }
    return f;
}
int factRecursion(int n)
{
    if (n==0 || n==1)
        return 1;
    else
        return n*factRecursion(n-1);
    }
int main()
{
    int a;
    cout<<"Enter any value :";
    cin>>a;
    cout<<factNormal(a)<<endl;
    cout<<factRecursion(a)<<endl;


}
