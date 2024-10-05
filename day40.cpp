#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cout<<"Enter string :";
    cin>>s;
    string e=s.substr(6,20);
    cout<<e;
}
