#include<iostream>
int main(){
    int num[5],largestNum=0,secondLargest=0;
    for(int i=0;i<5;i++){
        std::cout<<"Enter the element: ";
        std::cin>>num[i];
        if(largestNum<num[i]){
            secondLargest=largestNum;
            largestNum=num[i];
        }
        else
        if(largestNum!=secondLargest && secondLargest<num[i]){
            secondLargest=num[i];
        }
    }
    std::cout<<"Largest num : "<<largestNum<<"\nSecond largest num : "<<secondLargest;
    return 0;
