// Rectangle Calculator


#include<iostream>
using namespace std;
class Rectangle{
float length, width;
public:
void inputDimensions();
float calculateArea();
float calculatePerimeter();
void displayResult();
Rectangle();
Rectangle(float);
Rectangle(float,float);
};
/*void Rectangle::inputDimensions(){
    cout<<"Enter the length and width of the rectangle: ";
    cin>>length>>width;
}*/
Rectangle::Rectangle(){
    length=0;width=0;
}
Rectangle::Rectangle(float n){
length=n;width=n;
}
Rectangle::Rectangle(float l, float w){
    length=l;width=w;
}
float Rectangle::calculateArea(){
    return (length*width);
}
float Rectangle::calculatePerimeter(){
    return (2*(length + width));
}
void Rectangle::displayResult(){
    cout<<"\nLength: "<<length<<"\nWidth: "<<width<<"\nArea: "<<calculateArea()<<"\nPerimeter: "<<calculatePerimeter();
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
