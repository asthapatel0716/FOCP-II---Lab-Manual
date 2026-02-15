#include<iostream>
int main(){
    float marks[5],total=0,percentage;
    for(int i=0;i<5;i++){
        std::cout<<"Enter the marks of the subject "<<i+1<<" : ";
        std::cin>>marks[i];
        total+=marks[i];
    }
    percentage=(total/500.0)*100.0;
    std::cout<<"Total Marks: "<<total<<"\n percentage: "<<percentage;
    return 0;
