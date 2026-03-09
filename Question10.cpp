// checks whether a year is leap year or not

#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"Enetr a year: ";
    cin>>year;
    if(year%4==0 && year%100!=0 || year%400==0){
     cout<<"It is a leap year.";
    }
    else
    {
        cout<<"It is not a leap year.";
    }
    return 0;
}
