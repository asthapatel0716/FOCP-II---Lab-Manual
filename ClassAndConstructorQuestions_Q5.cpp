#include<iostream>
using namespace std;
class BankAccount{
    int account_no;
    float balance;
    public:
    BankAccount();
    BankAccount(int,float);
    void display();
};
BankAccount::BankAccount(){
    account_no=111;
    balance=0.0;
}
BankAccount::BankAccount(int a, float b){
    account_no=a;
    balance=b;
}
void BankAccount::display(){
    cout<<"\nAccount no. : "<<account_no<<"\nBalance : "<<balance;
}
int main(){
    BankAccount a1,a2(234554,990000);
    a1.display();
    a2.display();
    return 0;
}
