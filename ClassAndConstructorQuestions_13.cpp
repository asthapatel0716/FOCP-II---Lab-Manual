//Function Overloading


#include<iostream>
using namespace std;
class Laptop{
    string brand;
    int ram;
    int price;
    public:
    Laptop(){
        brand="Unknown";
        ram=0;
        price=0;
    }
    void setDetails(string b){
        brand=b;
    }
    void setDetails(string b, int r){
        brand=b;
        ram=r;
    }
    void setDetails(string b, int r, int p){
        brand=b;
        ram=r;
        price=p;
    }
    void display(){
        cout<<"\nBrand : "<<brand;
        cout<<"\nRAM : "<<ram;
        cout<<"\nPrice : "<<price;
    }
};
int main(){
    Laptop l1,l2,l3;
    l1.setDetails("Dell");
    l2.setDetails("HP",16);
    l3.setDetails("Apple",32,120000);
    l1.display();
    l2.display();
    l3.display();
    return 0;
}
