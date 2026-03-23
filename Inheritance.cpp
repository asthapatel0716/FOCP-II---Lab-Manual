#include<iostream>
using namespace std;
class Person{
    string name; int age;
    public:
    void display(){
        cout<<"\n name = "<<name<<"\n age = "<<age;
    }
    Person(){
        cout<<"\n Person default";name="";age=18;
    }
    Person(string name, int age){
        cout<<"\n person parameterised";
        this->name=name;
        this->age=age;
    }
};
class Student: public Person{
    string rollno;
    public:
    Student(){
        cout<<"\n student default";
        rollno="25CSU111";
    }
    Student(string rno,string nm, int ag):Person(nm,ag){
    cout<<"\nStudent parameterised";
    rollno=rno;
    }
    void display_student(){
    display();cout<<"\nrollno = "<<rollno;
    }
};
int main(){
    Student s1("25CSU009","Aastha",19),s2;
    s1.display_student();
    s2.display_student();
    return 0;
}
