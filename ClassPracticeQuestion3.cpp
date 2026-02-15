//Function Call by address or call by reference

#include<iostream>
using namespace std;
void swap(int *x,int *y){
    cout<<"\n Call by Address\n";
    *x=*x+*y;
    *y=*x-*y;
    *x=*x-*y;
}
 void swap(int &r1,int &r2){
     cout<<"\n Call By Reference\n";
     r1=r1+r2;
     r2=r1-r2;
     r1=r1-r2;
 }
// void swap(int a, int b){
//     cout<<"\n Call by value\n";
//  a=a+b;
//  b=a-b;
//  a=a-b;
// }
int main(){
 int a=5,b=10;
 cout<<"\nBefore swapping a = "<<a<<" b = "<<b;
 swap(a,b);
 cout<<"\nAfter swapping a = "<<a<<" b = "<<b;
 return 0;
}
