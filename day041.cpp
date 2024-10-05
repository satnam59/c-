#include<iostream>
using namespace std;
struct Student
{
    char name[20];
    int rollno;
    int age;
};

int main()
{
    Student obj[]={
        {"Kiran",1,21},
        {
            "Garry",2,33
        }};
   cout<<"Student Name:"<<obj[0].name<<endl;
   cout<<"Student Rollno:"<<obj[0].rollno<<endl;
   cout<<"Student Age:"<<obj[0].age<<endl;

  cout<<"Student Name:"<<obj[1].name<<endl;
   cout<<"Student Rollno:"<<obj[1].rollno<<endl;
   cout<<"Student Age:"<<obj[1].age<<endl;

}
