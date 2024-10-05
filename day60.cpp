#include<iostream>
using namespace std;
class Dost1
{
public :
    char pen[20];
};
class Dost2:Dost1
{
public:
    char pencil[20];
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
public:
   char eraser[20];
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

class Dost4:Dost2,Dost3
{
    char sharpner[20];
public:
    void enter()
    {
        cout<<"enter eraser name=";
        cin>>eraser;
        cout<<"enter pencil name=";
        cin>>pencil;
        cout<<"enter sharpner name=";
        cin>>sharpner;
        cout<<"Pencil name="<<pencil<<endl;
        cout<<"Eraser name="<<eraser<<endl;
        cout<<"Sharpner name="<<sharpner;
    }
};

int main()
{
    Dost3 D3;
    Dost2 D2;
    Dost4 D4;
    D3.use();
    D2.used();
    D4.enter();
}


