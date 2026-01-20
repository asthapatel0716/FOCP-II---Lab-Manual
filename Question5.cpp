//solution to swap two numbers using different techniques
// using third variable
/*#include<iostream>
int main(){
    int a,b,temp;
    std::cout<<"Enter two numbers: ";
    std::cin>>a>>b;
    std::cout<<"Numbers before swapping, a = "<<a<<" b = "<<b;
    temp=a;
    a=b;
    b=temp;
    std::cout<<"\nNumbers after swapping, a = "<<a<<" b = "<<b;
    return 0;
}*/



//using addition
/*#include<iostream>
int main(){
    int a,b;
    std::cout<<"Enter two numbers: ";
    std::cin>>a>>b;
    std::cout<<"Numbers before swapping are, a= "<<a<<" b= "<<b;
    a=a+b;
    b=a-b;
    a=a-b;
    std::cout<<"\nNumbers after swapping are, a= "<<a<<" b= "<<b;
    return 0; 
}*/



//using multiplication
/*#include<iostream>
int main(){
    int a,b;
    std::cout<<"Enter two numbers: ";
    std::cin>>a>>b;
    std::cout<<"Numbers before swapping: a= "<<a<<" b= "<<b;
    a=a*b;
    b=a/b;
    a=a/b;
    std::cout<<"\nNumbers after swapping: a= "<<a<<" b= "<<b;
    return 0;
}*/



// using bitwise operator
/*#include<iostream>
int main(){
    int a,b;
    std::cout<<"Enter two numbers: ";
    std::cin>>a>>b;
    std::cout<<"Numbers before swapping: a= "<<a<<" b= "<<b;
    a=a^b;
    b=a^b;
    a=a^b;
    std::cout<<"\nNumbers after swapping: a= "<<a<<" b= "<<b;
    return 0;
}*/
