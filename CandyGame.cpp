// Previous Year Question
//Candy Crush Game


#include<iostream>
using namespace std;
class Candy{
    string color;
    int points;
    public:
   // void setCandy(string c, int p);
    Candy();
    Candy(string);
    Candy(string,int);
    void displayCandy();
    void loose_points(int);
   void gain_points(int);
};
/*void Candy::setCandy(string c, int p){
    color=c;points=p;
}*/
Candy::Candy(){
    color="";
    points=0;
}
Candy::Candy(string c){
    color=c;points=0;
}
Candy::Candy(string c, int p){
    color=c;points=p;
}
void Candy::displayCandy(){
    cout<<"\nColor of the candy : "<<color;
    cout<<"\nYour points are : "<<points;
}
void Candy::loose_points(int p){
points=points-p;
}
void Candy::gain_points(int p){
    if(p>points){
        points=0;
    }
    else{
points=points + p;
    }
}
int main(){
    Candy c1,c2("Blue"),c3("Green",56);
    //c1.setCandy("Yellow",50);
    //c2.setCandy("Black",100);
    c1.displayCandy();
    c2.displayCandy();
    c3.displayCandy();
    //c1.loose_points(5);
    //c2.gain_points(10);
    //c1.displayCandy();
    //c2.displayCandy();
    return 0;
}
