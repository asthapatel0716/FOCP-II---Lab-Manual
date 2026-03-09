//a solution to compute total expenses and apply a discount accordingly. 

#include<iostream>
using namespace std;
int main(){
int order;
float total;
cout<<"Enter the order items: ";
cin>>order; 
total=order*150;
if(order>1000){
    total=total*0.9;
    cout<<"\n Discount applied";
}
else{
    cout<<"\n No discount";
}
cout<<"\n Total= "<<total;
return 0;
}
