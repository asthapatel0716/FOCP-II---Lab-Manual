//Online shopping cart

#include<iostream>
using namespace std;
class Product{
    string name;
    float price;
    int quantity;
    public:
    Product(){
        name="Unknown";
        price=0;
        quantity=0;
    }
    Product(string n, float p, int q){
        name=n;
        price=p;
        quantity=q;
    }
    float calculateTotal(){
        return price*quantity;
    }
    void display(){
        cout<<"\n\nProduct  : "<<name;
        cout<<"\nPrice    : "<<price;
        cout<<"\nQuantity : "<<quantity;
        cout<<"\nTotal    : "<<calculateTotal();
    }
    ~Product(){
        cout<<"\nProduct Removed: "<<name;
    }
};
int main(){
    Product p1;
    Product p2("Laptop", 75000, 2);
    Product p3("Keyboard", 999, 1);
    p1.display();
    p2.display();
    p3.display();
    return 0;
}
