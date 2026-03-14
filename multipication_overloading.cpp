#include<iostream>
using namespace std;
int multiply(int,int);
int multiply(int,int,int);
double multiply(double,double);
int main(){
    cout<<multiply(4,8)<<endl;
    cout<<multiply(2,7,10)<<endl;
    cout<<multiply(4.669,5.234)<<endl;
    return 0;
}
int multiply(int a,int b){
return a*b;
}
int multiply(int a,int b,int c){
    return a*b*c;
}
double multiply(double a,double b){
return a*b;
}
