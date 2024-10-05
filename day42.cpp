#include<iostream>
using namespace std;
struct student
{
    char n[20];
    char c[14];
    int r;
};
    struct Class
    {
        int t;
        student s;
    }z;

int main()
{
  cout<<"Enter the name of student :";
  cin>>z.s.n;
  cout<<"Enter the class of student :";
  cin>>z.s.c;
  cout<<"Enter the rollno of student :";
  cin>>z.s.r;
  cout<<"Enter the no. of student in class :";
  cin>>z.t;
  cout<<"-------------------------------------------------------------------------";
  cout<<"\n NAME\t\tClass\t\tROLL NO.\t\tNO. OF STUDENT";
  cout<<"\n"<<z.s.n<<"\t"<<z.s.c<<"\t\t"<<z.s.r<<"\t\t\t"<<z.t;
}
