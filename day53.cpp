#include<iostream>
using namespace std;
class student
{
    string name;
    int rollno;
    float PI=3.14;
public:
    void setName(string name)
    {
        this->name=name;
    }
    string getName()
    {
        return name;
    }
    void setRollno(int rollno)
    {
        this->rollno=rollno;

    }
    int getRollno()
    {
         return rollno;
    }
};

int main()
{
    student s;
    s.setName("Kiran");
    s.setRollno(1);
    cout<<"Student Name:"<<s.getName()<<endl;
    cout<<"Student Rollno:"<<s.getRollno()<<endl;

}
