#include<iostream>
using namespace std;
class Student
{
    string name="Kiran";
    int rollno=1;
public:
    void output()
    {
        cout<<"Student Name:"<<name<<endl;
        cout<<"Student Rollno:"<<rollno<<endl;
    }
};

int main()
{
    Student s;
    s.output();
}
