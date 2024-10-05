#include<iostream>
using namespace std;
int main()
{
    int a[10],i,n,del,pos,temp=0;
    cout<<"Enter your limit =";
    cin>>n;
    if(n<=10)
    {
        cout<<"ENTER ELEMENTS IN ARRAY"<<endl;
        for(i=0;i<n;i++)
        {
            cout<<"a["<<i<<"]=";
            cin>>a[i];
        }
        cout<<endl<<"ELEMENTS IN ARRAY"<<endl;
        for(i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }

        cout<<"\n\n"<<"Enter the position to delete element = ";
        cin>>pos;
        for(i=pos;i<n-1;i++)
        {
            a[i]=a[i+1];
        }
        cout<<endl<<"ELEMENTS AFTER DELETION  "<<endl;
        for(i=0;i<n-1;i++)
        {
            cout<<a[i]<<" ";
        }
    }
    else
    {
        cout<<"OVERLIMIT";
    }
}

