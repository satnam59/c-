#include<iostream>
using namespace std;
int main()
{
    char x;
    cout<<"Enter the value of x :";
    cin>>x;
    switch(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'||x=='A'||x=='E'||x=='I'||x=='O'||x=='U')
    {
        case 0 :cout<<"consonent";
                break;
        case 1 :cout<<"vowel";
                break;
    }
}
