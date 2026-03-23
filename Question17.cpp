//Accept a number and check whether it is a perfect number or an armstrong number

#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int sum=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    if(sum==n){
        cout<<"It is a Perfect number";
    }
    else{
        cout<<"It is not a Perfect number";
    }
    int digits=0, temp=n, num=0;
    while(temp>0){
        digits++;
        temp/=10;
    }
    temp=n;
    while(temp>0){
        int rem=temp%10;
        num+=pow(rem,digits);
        temp/=10;
    }
    if(num==n){
        cout<<"\nIt is an Armstrong number";
    }
    else{
        cout<<"\nIt is not an Armstrong number";
    }
    return 0;
}
