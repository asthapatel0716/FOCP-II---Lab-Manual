#include<iostream>
int main(){
    float salary[10],total=0;
    for(int i=0;i<10;i++){
        std::cout<<"Enter the salary of employee "<<i+1<<" : ";
        std::cin>>salary[i];
        total+=salary[i];
    }
    float average=total/10;
    std::cout<<"Total : "<<total<<"\nAverage : "<<average;
    return 0;
