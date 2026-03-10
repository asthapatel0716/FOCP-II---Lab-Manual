#include<iostream>
using namespace std;
class Car{
    string brand;
    float price;
    public:
    Car();
    Car(string,float);
    void display();
};
Car::Car(){
    brand="NO BRAND";
    price=0;
}
Car::Car(string a, float b){
    brand=a;
    price=b;
}
void Car::display(){
    cout<<"\nBrand : "<<brand<<"\nPrice : "<<price;
}
int main(){
Car c1,c2("Suzuki",10567.46);
c1.display();
c2.display();
return 0;  
}
