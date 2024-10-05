#include<iostream>
using namespace std;
class Dost1
{
public :
    char pen[20];
};
class Dost2
{
    char pencil[20];
public:
    void use()
    {
        Dost1 D1;
        cout<<"Enter pen name=";
        cin>>D1.pen;
        cout<<"enter pencil name=";
        cin>>pencil;
        cout<<"Pen Name:"<<D1.pen<<endl;
        cout<<"Pencil Name="<<pencil;
    }
};

int main()
{
    Dost2 D2;
    D2.use();
}
