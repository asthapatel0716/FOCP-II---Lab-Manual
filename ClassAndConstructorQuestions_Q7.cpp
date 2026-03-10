#include<iostream>
using namespace std;
class Table{
    string material;
    float price;
    int leg;
    public:
    Table();
    Table(string, float);
    Table(string,float,int);
    void display();
};
Table::Table(){
    material="Wood";price=5000;leg=4;
}
Table::Table(string a, float b){
    material=a;price=b;leg=4;
}
Table::Table(string a, float b,int c){
    material=a;price=b;leg=c;
}
void Table::display(){
    cout<<"\nMaterial : "<<material<<"\nPrice : "<<price<<"\nLegs : "<<leg;
}
int main(){
    Table t1,t2("Glass",1999),t3("Plastic",599,5);
    t1.display();t2.display();t3.display();
    return 0;
}
