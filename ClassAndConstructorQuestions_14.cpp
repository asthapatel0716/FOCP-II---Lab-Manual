//Vehicle Class


#include<iostream>
using namespace std;
class Vehicle{
    string vehicleNumber;
    string ownerName;
    string vehicleType;
    float registrationFee;
    public:
    Vehicle(){
        vehicleNumber="Not Assigned";
        ownerName="Unknown";
        vehicleType="General";
        registrationFee=0;
    }
    Vehicle(string v, string o){
        vehicleNumber=v;
        ownerName=o;
        vehicleType="General";
        registrationFee=0;
    }
    Vehicle(string v, string o, string t, float f){
        vehicleNumber=v;
        ownerName=o;
        vehicleType=t;
        registrationFee=f;
    }
    void displayVehicle(){
        cout<<"\nVehicle Number : "<<vehicleNumber;
        cout<<"\nOwner Name : "<<ownerName;
        cout<<"\nVehicle Type : "<<vehicleType;
        cout<<"\nRegistration Fee : "<<registrationFee;
    }
};
int main(){
    Vehicle v1;
    Vehicle v2("MP494135","Aastha Patel");
    Vehicle v3("DL6467876","Ayushi Patel","SUV",5000);
    v1.displayVehicle();
    v2.displayVehicle();
    v3.displayVehicle();
    return 0;
}
