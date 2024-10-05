#include<iostream>
using namespace std;
int main()
{
    int a=1;
    lally:
    if(a<=10)
    {

        cout<<a<<endl;
        a++;
        goto lally;
    }
}
