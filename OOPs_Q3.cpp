#include<iostream>
using namespace std;
class Employee{
    int emp_id;
    float salary;
    public:
    Employee();
    Employee(int,float);
    void display();
};
Employee::Employee(){
    emp_id=1111;
    salary=10000;
}
Employee::Employee(int a, float b){
    emp_id=a;
    salary=b;
}
void Employee::display(){
    cout<<"\nEmployee id= "<<emp_id<<"\nSalary= "<<salary;
}
int main(){
    Employee e1,e2(2323,235.352);
    e1.display();
    e2.display();
    return 0;
}
