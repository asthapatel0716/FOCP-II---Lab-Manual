//Implement a modular C++ solution that reads marks for 10 subjects into an array in main() and delegates the computation of average, minimum, and maximum scores to a separate method computePerformance()
#include<iostream>
using namespace std;
void computePerformance(float marks[], int size);
int main(){
    float marks[10];
    for(int i=0;i<10;i++){
        cout<<"Enter the marks of subject "<<i+1<<" : ";
        cin>>marks[i];
    }
    computePerformance(marks,10);
    return 0;
}
void computePerformance(float marks[],int size){
    float sum=0,max=marks[0],min=marks[0];
    for(int i=0;i<size;i++){
    sum+=marks[i];
    if(marks[i]>max){
        max=marks[i];
    }
    if(marks[i]<min){
        min=marks[i];
    }
    }
    cout<<"\nAverage: "<<(sum/10.0)<<"\nMaximum Score: "<<max<<"\nMinimum Score: "<<min;
}
