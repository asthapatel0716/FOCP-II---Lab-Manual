// Class Student

#include<iostream>
using namespace std;
class Student
{
    int roll_no;
    string name;
    int reg_no;
    public:
    float m1,m2,m3;
    void Display_result(){
        cout<<"\nMarks of subject 1: "<<m1;
         cout<<"\nMarks of subject 2: "<<m2;
          cout<<"\nMarks of subject 3: "<<m3;
          cout<<"\nTotal marks: "<<m1+m2+m3;
    }
    void student_entry(){
        cout<<"\nEnter your name, Roll no, registration number: ";
        cin>>name>>roll_no>>reg_no;
    }
    void marks_entry(){
        cout<<"\nEnter the marks of subject 1, 2 and 3: ";
        cin>> m1>>m2>>m3;
    }
    void student_details(){
         cout<<"\nName: "<<name<<"\nRoll No: "<<roll_no<<"\nRegistration no: "<<reg_no;
    }
};
int main(){
    Student Aastha;
    Aastha.student_entry();
    Aastha.marks_entry();
    Aastha.student_details();
    Aastha.Display_result();
    return 0;
}
