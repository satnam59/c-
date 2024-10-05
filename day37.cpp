#include<iostream>
#include<cstring>
using namespace std;
int main()
{
   char s[20],a[20];
   cout<<"Enter string ";
   cin>>s;
   strcpy(a,s);
   cout<<"Actual string="<<s<<endl;
   cout<<"Copied string="<<a<<endl;

}
