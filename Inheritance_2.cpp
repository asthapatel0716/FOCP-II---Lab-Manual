#include<iostream>
using namespace std;
class Account{
    float balance;
    int accountNo;
    public:
    Account(){
        cout<<"\nAccount Default";
        accountNo=11001100;
        balance=0;
    }
    Account(float b, int a){
        cout<<"\nAccount Parameterised";
        balance=b;
        accountNo=a;
    }
    float getBalance(){
        return balance;
    }
    void displayAccount(){
        cout<<"\nBalance = "<<balance<<"\nAccount No = "<<accountNo;
    }
};
class SavingsAccount: public Account{
    float interestRate;
    float interest;
    public:
    SavingsAccount(){
        cout<<"\nSavingsAccount Default";
        interestRate=0.12;
        interest=0;
    }
    SavingsAccount(float i, float b, int a):Account(b,a){
        cout<<"\nSavingsAccount Parameterised";
        interestRate=i;
        interest=0;
    }
    void calculateInterest(){
        interest=getBalance()*interestRate;
        cout<<"\nInterest Rate = "<<interestRate<<"\nInterest = "<<interest;
    }
};
int main(){
    SavingsAccount s1,s2(0.12,45000,4357867);
    s1.displayAccount();
    s2.displayAccount();
    s1.calculateInterest();
    s2.calculateInterest();
    return 0;
}