#include<iostream>
using namespace std;
int find()
{
    if(n==10)
        return 1;
    else
        return 2;
}
int main()
{
    int n,m;
    cout<<" enter SGPA of student";
    cin>>n;
    m=find();
    if(m==1)
        cout<<"excellent";
    if(m==2)
        cout<<"work hard";
}

