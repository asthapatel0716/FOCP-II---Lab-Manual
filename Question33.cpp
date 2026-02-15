#include<iostream>
int main(){
    int studentMarks[3][5];
    for(int i=0;i<3;i++){
        std::cout<<"For student "<<i+1;
        for(int j=0;j<5;j++){
            std::cout<<"\nEnter the marks of subject "<<j+1<<" : ";
            std::cin>>studentMarks[i][j];
        }
    }
    std::cout<<"\nMarks in 2nd subject of 1st student is "<<studentMarks[0][1]<<"\nMarks in 5th subject of 3rd student is "<<studentMarks[2][4];
    return 0;
