#include<iostream>
int main(){
    int i;
    float temperatures[30];
    for(i=0;i<30;i++){
        std::cout<<"Enter the temperature of day "<<i+1<<" : ";
        std::cin>>temperatures[i];
        }
        float min=temperatures[0];
    for(i=0;i<30;i++){
        if(min>temperatures[i]){
            min=temperatures[i];
    }
}
    std::cout<<"Minimum temperature: "<<min;
    return 0;
