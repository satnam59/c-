#include<iostream>
using namespace std;
int main()
{
  int ar[10],i,n;
  int min,max;
  cout<<"Enter array limit:";
  cin>>n;

  if(n<=10)
  {

      for(i=0;i<n;i++)
      {
          cout<<"Enter array element["<<i<<"]=";
          cin>>ar[i];
      }
      min=ar[0];
      max=ar[0];
      for(i=0;i<n;i++)
      {
        if(ar[i]<min)
            min=ar[i];
        else if (ar[i]>max)
            max=ar[i];
      }
      cout<<"Maximum Value="<<max<<endl;
      cout<<"Minimum Value="<<min<<endl;
  }
    else
    {
        cout<<"Over Limit";
    }

}
