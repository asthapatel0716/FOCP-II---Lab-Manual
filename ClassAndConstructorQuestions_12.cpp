//Mobile Store


#include<iostream>
using namespace std;
class Mobile{
    string brand;
    float price;
    int storage;
    public:
    Mobile(){
        brand="Unknown";
        price=0;
        storage=0;
    }
    Mobile(string b){
        brand=b;
        price=0;
        storage=0;
    }
    Mobile(string b, float p){
        brand=b;
        price=p;
        storage=0;
    }
    Mobile(string b, float p, int s){
        brand=b;
        price=p;
        storage=s;
    }
    void display(){
        cout<<"\nBrand : "<<brand;
        cout<<"\nPrice : "<<price;
        cout<<"\nStorage : "<<storage;
    }
};
int main(){
    Mobile m1,m2("Samsung"),m3("Realme",35000),m4("Apple",120000,256);
    m1.display();
    m2.display();
    m3.display();
    m4.display();
    return 0;
}
