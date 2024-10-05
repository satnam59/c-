#include<iostream>
using namespace std;
int main()
{
    int a[10],i,n,ins,pos,temp=0;
    cout<<"Enter your limit =";
    cin>>n;
    if(n<=10)
    {
        cout<<endl<<"ENTER ELEMENTS IN ARRAY"<<endl;
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
        cout<<"\n\n"<<"Insert an element in an array = ";
        cin>>ins;
        cout<<"Enter the position of inserting element = ";
        cin>>pos;
        a[i]=ins;
        for(i=n;i>=pos;i--)
        {
            if(i==pos)
            {
                a[i]=ins;
            }

            else
            {
               a[i]=a[i-1];
            }
        }
        cout<<endl<<"ELEMENTS AFTER INSERTION  "<<endl;
        for(i=0;i<=n;i++)
        {
            cout<<a[i]<<" ";
        }
    }
    else
    {
        cout<<"OVERLIMIT";
    }
}
