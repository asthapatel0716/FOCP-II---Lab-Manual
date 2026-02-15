#include<iostream>
int main(){
    int num[5],oddSum=0,evenSum=0;
    for(int i=0;i<5;i++){
        std::cout<<"Enter the value of element "<<i+1<<" : ";
        std::cin>>num[i];
        if(num[i]%2==0){
            evenSum+=num[i];
        }
        else{
            oddSum+=num[i];
        }
    }
    std::cout<<"Sum of all even numbers is "<<evenSum<<"\nSum of all odd numbers is "<<oddSum;
    return 0;
