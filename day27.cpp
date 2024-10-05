#include<iostream>
using namespace std;
int main()
{
    int ar[10],i,n,val,loc=0;
    cout<<"Enter array limit:";
    cin>>n;

    for(i=0;i<n;i++)
    {
        cout<<"Enter array elements["<<i<<"]=";
        cin>>ar[i];
    }
    cout<<"Enter searching value=";
    cin>>val;
    for(i=0;i<n;i++)
    {
        if(ar[i]==val)
        {
            loc=i;
            break;
        }
    }
    if(loc!=0)
        cout<<"Location Found="<<loc;
    else
        cout<<"Not found";

}
