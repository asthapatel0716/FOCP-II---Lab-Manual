#include<iostream>
int main(){
    int num[5],count=0;
    for(int i=0;i<5;i++){
        std::cout<<"Enter the value of elemnet "<<i+1<<" : ";
        std::cin>>num[i];
        if(num[i]%3==0 && num[i]%5==0){
            count++;
        }
    }
    std::cout<<"Number divisible by both 3 and 5 are "<<count;
    return 0;
