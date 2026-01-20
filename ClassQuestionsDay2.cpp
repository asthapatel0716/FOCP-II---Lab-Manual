// using cin and getline
#include<iostream>
int main(){
    int no;
    std::string name;
    std::cout<<"Enter a number and name: ";
    //std::cin>>name;
    std::cin>>no;
    std::cin.ignore();
    getline(std::cin,name);
    std::cout<<"Your no is "<<no<<" name is "<<name;
    return 0;
}
