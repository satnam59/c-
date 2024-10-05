#include<iostream>
using namespace std;
class Dost1
{
public :
    char pen[20];
};
class Dost2:Dost1
{
    char pencil[20];
public:
    void used()
    {
        cout<<"Enter pen name=";
        cin>>pen;
        cout<<"Enter pencil name=";
        cin>>pencil;
        cout<<"Pen Name:"<<pen<<endl;
        cout<<"Pencil Name="<<pencil<<endl;
    }



};
class Dost3:Dost1
{

char eraser[20];
public:
    void use()
    {

        cout<<"Enter pen name=";
        cin>>pen;
        cout<<"Enter eraser name=";
        cin>>eraser;
        cout<<"Pen Name:"<<pen<<endl;
        cout<<"Eraser Name="<<eraser<<endl;
    }
};

int main()
{
    Dost3 D3;
    Dost2 D2;
    D3.use();
    D2.used();
}


