#include<iostream>
using namespace std;
int main()
{
    float a,b;
    int ch;
    cout<<" Enter first number : ";
    cin>>a;
    cout<<"\n Enter second number : ";
    cin>>b;
    cout<<"\t   CHOICES ";
    cout<<"\n\t 1. Addition";
    cout<<"\n\t 2. Subtraction";
    cout<<"\n\t 3. Division";
    cout<<"\n\t 4. Multiplication";
    cout<<"\n Enter your choice =";
    cin>>ch;
    switch(ch)
    {
    case 1 : cout<<"\n\tAddition ="<<a+b;
             break;
    case 2 : cout<<"\n\tSubtraction ="<<a-b;
             break;
    case 3 : cout<<"\n\tDivision ="<<a/b;
             break;
    case 4 : cout<<"\n\tMultiplication ="<<a*b;
             break;
    default : cout<<"\n\tINVALID CHOICE =";
    }
}

