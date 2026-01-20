// convert fahrenheit temperature into celsius
#include<iostream>
int main(){
    float temperature;
    std::cout<<"Enter temperature in fahrenheit: ";
    std::cin>>temperature;
    std::cout<<"Temperature in celsius is "<<(temperature-32)*(5.0/9.0);
    return 0;

}

