#include<iostream>
using namespace std;
class Rectangle{
float length, breadth;
public:
float calculateArea();
void displayResult();
Rectangle();
Rectangle(float);
Rectangle(float,float);
};
Rectangle::Rectangle(){
    length=0;breadth=0;
}
Rectangle::Rectangle(float n){
length=n;breadth=n;
}
Rectangle::Rectangle(float l, float w){
    length=l;breadth=w;
}
float Rectangle::calculateArea(){
    return (length*breadth);
}
void Rectangle::displayResult(){
    cout<<"\nLength: "<<length<<"\nWidth: "<<breadth<<"\nArea: "<<calculateArea();
}
int main(){
    Rectangle r1;
    Rectangle r2(5);
    Rectangle r3(4.2,7.9);
    r1.displayResult();
     r2.displayResult();
      r3.displayResult();
    return 0;
}
