#include<iostream>
using namespace std;
class Student{
    string name;
    float marks;
    public:
    Student();
    Student(string,float);
    void display();
};
Student::Student(){
    name="";
    marks=0;
}
Student::Student(string a, float b){
    name=a;
    marks=b;
}
void Student::display(){
    cout<<"\nName : "<<name<<"\nMarks : "<<marks;
}
int main(){
    Student s1,s2("Aastha",95.5);
    s1.display();
    s2.display();
    return 0;
}
