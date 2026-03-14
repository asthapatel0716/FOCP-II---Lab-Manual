//Class Car


#include<iostream>
using namespace std;
class Car
{
 string brand;
 int make_year;
 
 string colour;
 public:
 string type;
 void display(){
    cout<<"\nBrand: "<<brand;
    cout<<"\nMake_year: "<<make_year;
    cout<<"\nType: "<<type;
    cout<<"\nColour: "<<colour;
}
void car_entry(){
    cout<<"Enter the brand, make year, type, colour";
    cin>>brand>>make_year>>type>>colour;
 }
};
int main(){
    Car c1;
    c1.car_entry();
    c1.type="sedan";
    c1.display();
    return 0;
}
