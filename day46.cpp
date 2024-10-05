#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char *name[20],temp[20];
    int n,i,j;
    cout<<"Enter number of string you want to enter ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"Enter name"<<i<<":";
        name[i]=new char[20];
        cin>>name[i];
    }
    cout<<"ENTERED NAME :\n";
    for(i=0;i<n;i++)
    {
        cout<<name[i]<<endl;
    }
    for(i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {

         if(strcmp(name[j],name[j+1])>0)
            {
            strcpy(temp,name[j]);
            strcpy(name[j],name[j+1]);
            strcpy(name[j+1],temp);

            }
        }

    }
    cout<<"AFTER SORTING:\n";
    for(i=0;i<n;i++)
    {
        cout<<name[i]<<endl;
    }
    delete (*name);

}






