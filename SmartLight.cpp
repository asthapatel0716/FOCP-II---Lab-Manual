#include<iostream>
using namespace std;
class SmartLight
{
  string brand;
  int brightness;
  bool isOn;
  public:
  SmartLight();
  SmartLight(string,int,bool);
  void turnOn();
  void turnOff();
  void increaseBrightness();
  void decreaseBrightness();
  void displayStatus();
  ~SmartLight(){
    cout<<"\nObject Destroyed";
  }
};
 SmartLight::SmartLight(){
    brand="";
  isOn=false;
  brightness=50;
 }
 SmartLight::SmartLight(string a,int b,bool n){
    brand=a;
    brightness=b;
    isOn=n;
 }
 void SmartLight::turnOn(){
    isOn=true;
 }
  void SmartLight::turnOff(){
    isOn=false;
  }
  void SmartLight::increaseBrightness(){
   if(brightness>0 && brightness<100){
    brightness++;
   }
   else{
    cout<<"\nBrightness should be between 0-100";
   }
  }
  void SmartLight::decreaseBrightness(){
    if(brightness>0 && brightness<100){
        brightness--;}
        else{
           cout<<"\nBrightness should be between 0-100"; 
        }
  }
  void SmartLight::displayStatus(){
    cout<<"\n Brand : "<<brand<<"\n Brightness : "<<brightness;
    if(isOn==0){
        cout<<"\nOFF";
    }
    else{
        cout<<"\nON";
    }
  }
  int main(){
  SmartLight s1;
  s1.displayStatus();
  SmartLight s2("Aastha",45,true);
  s2.displayStatus();
  return 0;
  }


