#include<iostream>
int main(){
    float prices[10],max=0;
    for(int i=0;i<10;i++){
        std::cout<<"Enter the price of item "<<i+1 <<":";
        std::cin>>prices[i];
        if(max<prices[i]){
            max=prices[i];
        }
    }
    std::cout<<"Maximum price: "<<max;
    return 0;
