//a solution to check the triangle type based on its sides. 

#include<iostream>
using namespace std;
int main(){
    float a,b,c;
    cout<<"Enter the value of the sides of the triangle: ";
    cin>>a>>b>>c;
    if(a==b && b==c){
        cout<<"It is an equilateral triangle.";
    }
    else
    if(a==b || b==c){
        cout<<"It is a isoceles triangle.";
    }
    else
    {
        cout<<"It is a scalene triangle.";
    }
    return 0;
}
