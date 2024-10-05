#include<iostream>
using namespace std;
class Student
{
    string name;
    int rollno;

public:
    Student()//Default constructor
    {
        name="Kiran";
        rollno=1;

    }
     Student(string name,int rollno)//Default constructor
    {
        this->name=name;
        this->rollno=rollno;

    }
    Student(Student &ob) //Copy Constructor
    {
        name=ob.name;
        rollno=ob.rollno;
    }
    void output()
    {
        cout<<"\nStudet Name:"<<name<<endl;
        cout<<"\nStudent Rollno:"<<rollno<<endl;
    }
    ~Student()
    {
        cout<<"\nDestructor Calling..."<<endl;
    }
};

int main()
{
    Student s1; //for default constructor
    s1.output();
    Student s2("Harry",1); //For Parameterized Constructor
    s2.output();
    Student s3;// for default constructor
    s3=s2;
    s3.output();
    Student s4(s1);// for copy constructor
    s4.output();

}
