#include<iostream>
using namespace std;
class Book{
string title;
float price;
public:
Book();
Book(string,float);
void display();
};
Book::Book(){
    title="";price=0;
}
Book::Book(string a, float b){
    title=a;
    price=b;
}
void Book::display(){
    cout<<"\nBook Title : "<<title<<"\nPrice : "<<price;
}
int main(){
    Book b1,b2("Atomic Habits",450.55);
    b1.display();
    b2.display();
    return 0;
}
