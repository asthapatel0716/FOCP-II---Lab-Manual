// Buzz and Fuzz question


#include<iostream>
using namespace std;
int main(){
    int n, Id;
    cout<<"Enter the value of N : ";
    cin>>n;
    cout<<"Enter the ID : ";
    cin>>Id;
    if(Id >= 1 && Id <= n){
        if(Id % 3 == 0 && Id % 5 == 0){
            cout<<"BUZZ FUZZ";
        }
        else if(Id % 3 == 0){
            cout<<"BUZZ";
        }
        else if(Id % 5 == 0){
            cout<<"FUZZ";
        }
    }
    else{
        cout<<"Invalid ID";
    }
    return 0;
}
