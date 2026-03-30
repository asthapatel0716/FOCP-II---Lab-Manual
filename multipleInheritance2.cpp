#include<iostream>
using namespace std;
class Employee{
    protected:
    string name;
    public:
    Employee(){
        name="";
    }
    Employee(string n){
        name=n;
    }
};
class Department{
    protected:
    string departmentName;
    public:
    Department(){
        departmentName="";
    }
    Department(string d){
        departmentName=d;
    }
};
class Manager:public Employee,public Department{
    public:
    Manager():Employee(""),Department(""){}
    Manager(string n, string d):Employee(n),Department(d){}
    void display(){
        cout<<"\nName : "<<name<<"\nDepartment Name : "<<departmentName;
    }
};
int main(){
    Manager m1, m2("Astha","Finance");
    m1.display();
    m2.display();
    return 0;
}
