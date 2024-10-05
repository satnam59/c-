#include<iostream>
using namespace std;
int main()
{
    int ar[10],n,i,j,temp;
    cout<<"enter your limit = ";
    cin>>n;
    if(n<=10)
    {
        for(i=0;i<n;i++)
        {
          cout<<"Enter element in array["<<i<<"]=";
          cin>>ar[i];
        }
        cout<<endl<<"unsorted ELEMENTS IN ARRAY"<<endl;
        for(i=0;i<n;i++)
        {
            cout<<ar[i]<<endl;
        }

        //sorting
          for(i=0;i<n-1;i++)
            {
                  for(j=0;j<n-i-1;j++)
                    {
                            if(ar[j]>ar[j+1])
                            {
                                temp=ar[j];
                                ar[j]=ar[j+1];
                                ar[j+1]=temp;
                            }
                    }
            }
        cout<<endl<<"Sorted ELEMENTS IN ARRAY"<<endl;
        for(i=0;i<n;i++)
        {
            cout<<ar[i]<<endl;
        }
    }
    else
    {
        cout<<"OVERLIMIT";

    }
}

