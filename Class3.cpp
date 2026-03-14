//Class Rectangle

#include<iostream>
using namespace std;
class Rectangle{
float length, width;
public:
float area;
void entry(){
    cout<<"\nEnter the values of length and width: ";
    cin>>length>>width;
}
void calculate_area(){
    area=length*width;
}
void display(){
    cout<<"\n Length: "<<length<<"\nWidth: "<<width<<"\nArea: "<<area;
}
};
int main(){
    Rectangle r1;
    r1.entry();
    r1.calculate_area();
    r1.display();
    return 0;
}
