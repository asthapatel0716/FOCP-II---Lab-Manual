//compute the amount and apply 20% discount
#include<iostream>
int main(){
    int item_no;
    float quantity, unit_price;
    std::cout<<"Enter the item no: ";
    std::cin>>item_no;
    std::cout<<"Enter the quantity: ";
    std::cin>>quantity;
    std::cout<<"Enter the unit price: ";
    std::cin>>unit_price;
    std::cout<<"The total amount is "<<quantity*unit_price<<" and the amout after applying 20%% discount is "<<(quantity*unit_price)*0.8;
    return 0;
}
