#include<iostream>
using namespace std;
int Volume(int a){
    int vol=a*a*a;
}
int Volume(int l,int b,int h){
    int vol=l*b*h;
}
int Volume(int r, int h){
    float vol=3.14*r*r*h;
}
int main(){
    cout<<"\nVolume of cube : "<<Volume(5);
    cout<<"\nVolume of cuboid : "<<Volume(4,7,8);
    cout<<"\nVolume of cylinder: "<<Volume(33,65);
    return 0;

}
