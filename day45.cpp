#include<iostream>
using namespace std;
int main()
{
    char  *name[20];
    int i,n;
    cout<<"How many strings you want to enter =";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"Enter your name";
        name[i]=new char[20];
        cin>>name[i];
    }

    for(i=0;i<n;i++)
    {
        cout<<name[i]<<endl;
    }
    delete(*name);
}
