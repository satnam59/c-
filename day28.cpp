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
          for(i=0;i<n;i++)
            {
                  for(j=i+1;j<n;j++)
                    {
                            if(ar[i]>ar[j])
                            {
                                temp=ar[i];
                                ar[i]=ar[j];
                                ar[j]=temp;
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
