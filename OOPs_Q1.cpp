//Student Record System 


#include<iostream>
using namespace std;
class Student{
  int rollNo;
    string name;
    int marks1;
    int marks2;
    int marks3;
    public:
/*void inputDetails(){       //setter
    cout<<"Enter Roll no ,name,marks1,marks2 & marks3: ";
    cin>>rollNo>>name>>marks1>>marks2>>marks3;
}*/
int calculateTotal(){      //getter
  return (marks1+marks2+marks3);
}
void displayDetails();//getter
Student();
Student(int, string);
Student(int,string,int,int,int);
};
Student::Student(){
name=""; rollNo=0;
marks1=0;marks2=0;marks3=0;
} 
Student::Student(int rno, string n){
    rollNo=rno;name=n;marks1=0;marks2=0;marks3=0;
}
Student::Student(int rno,string n, int m1, int m2, int m3){
rollNo=rno;name=n;marks1=m1;marks2=m2;marks3=m3;
}
void Student::displayDetails(){     //getter
   cout<<"\n Name:  "<<name<<"\nRollNo: "<< rollNo;
   cout<<"\nMarks1: "<<marks1<<"\nMarks2: "<<marks2<<"\nMarks:"<<marks3;  
   cout<<"\nTotal: "<<calculateTotal();
}
int main(){
 Student s1;
 Student s2(101,"ABC");Student s3(102,"xyz",87,46,98);
 s1.displayDetails();
 s2.displayDetails();
 s3.displayDetails();
 return 0;
}
