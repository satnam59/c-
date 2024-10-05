#include<iostream>
using namespace std;
class Dost2;
class Dost1
{
    int a=30;
public:

    friend int sum(Dost1 d1,Dost2 d2);
};

class Dost2
{
    int b=10;
public:

    friend int sum(Dost1 d1,Dost2 d2);
};
int sum(Dost1 d1,Dost2 d2)
{
    return d1.a+d2.b;
}

    int main()
    {
        Dost1 d1;
        Dost2 d2;

        cout<<"Sum of two numbers="<<sum(d1,d2);
    }

