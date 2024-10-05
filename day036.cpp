#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    string str;
    cout<<"Enter any string";
    cin>>str;
    transform(str.begin(),str.end(),str.begin(),::toupper);
    cout<<"string after conversion";
    cout<<str<<endl;

}
