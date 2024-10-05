#include<iostream>
using namespace std;
struct Student
{
    string name;
    int rollno;
    float fee;
};
    int main()
    {
        Student *p=new Student();
        cout<<"Enter Student Name:";
        cin>>p->name;
        cout<<"Enter Student Rollno:";
        cin>>p->rollno;
        cout<<"Enter Student Fee:";
        cin>>p->fee;

        cout<<"Student Name:"<<p->name<<endl;
        cout<<"Student Rollno:"<<p->rollno<<endl;
        cout<<"Student Fee:"<<p->fee<<endl;


    }
