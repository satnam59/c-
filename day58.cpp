#include<iostream>
using namespace std;
class Dost1
{
public :
    char pen[20];
};
class Dost2
{
    public:
    char pencil[20];
};
class Dost3:Dost1,Dost2
{

char eraser[20];
public:
    void use()
    {

        cout<<"Enter pen name=";
        cin>>pen;
        cout<<"Enter pencil name=";
        cin>>pencil;
        cout<<"Enter eraser name=";
        cin>>eraser;
        cout<<"Pen Name:"<<pen<<endl;
        cout<<"Pencil Name="<<pencil<<endl;
        cout<<"Eraser Name="<<eraser;
    }
};

int main()
{
    Dost3 D3;
    D3.use();
}

