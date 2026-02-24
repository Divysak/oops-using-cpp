/*
#include <iostream>
using namespace std;

class student
{
    int id,total_m=0;
    float percentage;
    char name[30];
    int sub[5];
    char grade;
public:
    void input();
    void cal();
    void print();
};

void student::print()
{
    cout<<"Student ID: "<<id<<endl;
    cout<<"Student Name: "<<name<<endl;
    cout<<"Total Marks: "<<total_m<<endl;
    cout<<"Percentage: "<<percentage<<"%"<<endl;
    cout<<"Grade: "<<grade<<endl;
}

void student::input()
{
    cout<<"Enter student id: ";
    cin>>id;

    cout<<"Enter student name: ";
    cin>>name;  

    cout<<"Enter marks of 5 subjects: ";
    for(int i=0;i<5;i++)
    {
        cin>>sub[i];
    }
}

void student::cal()
{

    for(int i=0;i<5;i++)
    {
        total_m+=sub[i];
    }

    percentage=(total_m/500.0)*100;

    if(percentage>=90)
        grade='A';
    else if(percentage>=80)
        grade='B';
    else if(percentage>=70)
        grade='C';
    else if(percentage>=60)
        grade='D';
    else
        grade='F';
}

int main()
{
    student s;
    s.input();
    s.cal();
    s.print();
    return 0;
}
    
// wap to create a class student with data members id, name, marks of 5 subjects, total marks, percentage and grade.
// member functions input(), cal() and print() to input data, calculate total marks, percentage and grade and print the details of student respectively.

#include <iostream>
using namespace std;
class student
{
    int id,total_m=0;
    float percentage;
    char name[30];
    int sub[5];
    char grade;
   public:
    void input();
    void cal();
    void print();
};
void student::input()
{
    cout<<"Enter student id: ";
    cin>>id;
    cout<<"Enter student name: ";
    cin>>name;  
    cout<<"Enter marks of 5 subjects: ";
    for(int i=0;i<5;i++)
    {
        cin>>sub[i];
    }
}
void student::cal()
{
    for(int i=0;i<5;i++)
    {
        total_m+=sub[i];
    }
    percentage=(total_m/500.0)*100;
    if(percentage>=90)
        grade='A';
    else if(percentage>=80)
        grade='B';
    else if(percentage>=70)
        grade='C';
    else if(percentage>=60)
        grade='D';
    else
        grade='F';
}
void student::print()
{
    cout<<"Student ID: "<<id<<endl;
    cout<<"Student Name: "<<name<<endl;
    cout<<"Total Marks: "<<total_m<<endl;
    cout<<"Percentage: "<<percentage<<"%"<<endl;
    cout<<"Grade: "<<grade<<endl;
}
int main()
{
    student s;
    s.input();
    s.cal();
    s.print();
    return 0;
}*/
// wap to create a class student with data members of 5 studentsid, name, marks of 5 subjects, total marks, percentage and grade.
// member functions input(), cal() and print() to input data, calculate total marks, percentage and grade and print the details of student respectively.
#include <iostream>
using namespace std;
class student
{
    int id,total_m=0;
    float percentage;
    char name[30];
    int sub[5];
    char grade;
   public:
    void input();
    void cal();
    void print();
};
void student::input()
{
    cout<<"Enter student id: ";
    cin>>id;
    cout<<"Enter student name: ";
    cin>>name;  
    cout<<"Enter marks of 5 subjects: ";
    for(int i=0;i<5;i++)
    {
        cin>>sub[i];
    }
}
void student::cal()
{
    for(int i=0;i<5;i++)
    {
        total_m+=sub[i];
    }  
    percentage=(total_m/500.0)*100;
    if(percentage>=90)
        grade='A';
    else if(percentage>=80)
        grade='B';
    else if(percentage>=70)
        grade='C';
    else if(percentage>=60)
        grade='D';
    else
        grade='F';
}
void student::print()
{
    cout<<"Student ID: "<<id<<endl;
    cout<<"Student Name: "<<name<<endl;
    cout<<"Total Marks: "<<total_m<<endl;
    cout<<"Percentage: "<<percentage<<"%"<<endl;
    cout<<"Grade: "<<grade<<endl;
}
int main()
{
    student s[5];
    for(int i=0;i<5;i++)
    {
        cout<<"Enter details of student "<<i+1<<endl;
        s[i].input();
        s[i].cal();
    }
    for(int i=0;i<5;i++)
    {
        cout<<"Details of student "<<i+1<<endl;
        s[i].print();
    }
    return 0;
}
