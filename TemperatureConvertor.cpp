#include<iostream>
using namespace std;
class Temperature{
    float celsius;
    public:
    void inputTemperature(){
        cout<<"Enter temperature in Celsius: ";
        cin>>celsius;
    }
    float convertToFahrenheit(){
        return (celsius*9/5)+32;
    }
    void displayResult(){
        cout<<"\nCelsius    = "<<celsius;
        cout<<"\nFahrenheit = "<<convertToFahrenheit();
    }
};
int main(){
    Temperature t;
    t.inputTemperature();
    t.displayResult();
    return 0;
}
