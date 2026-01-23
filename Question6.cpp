//Compute bonus, net salaries and display results

#include<iostream>
int main(){
    int emp_no;
    float basic_salary;
    std::cout<<"Enter the number of employees: ";
    std::cin>>emp_no;
    for(int i=1;i<=emp_no;i++){
        std::cout<<"\nEnter the basic salary for employee "<<i<<" : ";
        std::cin>>basic_salary;
        float bonus = basic_salary*0.12;
        float net_salary = basic_salary + bonus; 
        std::cout<<"\nBonus for employee "<<i<<" : "<<bonus;
        std::cout<<"\nNet Salary for employee "<<i<<" : "<<net_salary;
    }
    return 0;
}
