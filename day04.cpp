
#include<iostream>

using namespace std;
int main()
{
 char name[20];
 int rollno,e,m,s,h,p,t;
 float P;
 cout<<"enter your name=";
 cin>>name;
 cout<<"enter your  rollno=";
 cin>>rollno;
 cout<<"enter your marks in maths=";
 cin>>m;
 cout<<"enter your marks  marks in english=";
 cin>>e;
 cout<<"enter your marks in science=";
 cin>>s;
 cout<<"enter your marks in hindi=";
 cin>>h;
 cout<<"enter your marks i punjabi=";
 cin>>p;
 cout<<"\nstudents name="<<name;
 cout<<"\nstudents roll no"<<rollno;
 cout<<"\nstudents marks in English\tMaths\tScience\tHindi\tPunjabi\n"<<"\t\t\t"<<e<<"\t"<<m<<"\t"<<s<<"\t"<<h<<"\t"<<p;
 t=e+m+s+h+p;
 P=((t*100)/500);
 cout<<"\nTOTAL="<<t;
 cout<<"\nPERCENTAGE="<<P;
}
