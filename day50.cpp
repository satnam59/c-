#include<iostream>
using namespace std;
class student
{
    string name;
    int rollno;
public:
    void stuInput(string name,int rollno);
    void stuOutput();
};
    inline void student::stuInput(string name,int rollno)
    {
        this->name=name;
        this->rollno=rollno;
    }
    inline void student::stuOutput()
    {
    cout<<"Student Name="<<name<<endl;
    cout<<"Student Rollno="<<rollno;

    }

int main()
{
    char nm[10];
    int rl;
    student obj;
    /*cout<<"Enter your name=";
    cin>>nm;
    cout<<"Enter your rollno=";
    cin>>rl;
    obj.stuInput(nm,rl);
    obj.stuOutput();*/

//    cout<<"Address allocated to student class="<<student<<endl;
    cout<<"Address allocated to student class object obj="<<uintptr_t(&obj)<<endl;
    cout<<"Address allocated to student class object obj="<<&obj<<endl;



}
