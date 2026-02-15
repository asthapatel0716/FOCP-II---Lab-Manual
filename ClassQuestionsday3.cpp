//String Handling
// Implement a solution to count the number of vowels and integers in a string

/* #include<iostream>
int main(){
int vowelCount=0,numCount=0;
    std::string batch;
    std::cout<<"Enter the string: ";
    getline(std::cin,batch);
    for(int i=0;i<batch.length();i++){
        if(batch[i]=='A' || batch[i]=='E' || batch[i]=='I' || batch[i]=='O' || batch[i]=='U' || batch[i]=='a' || batch[i]=='e' || batch[i]=='i' || batch[i]=='o' || batch[i]=='u'){
        vowelCount++;}
        if(batch[i]>='0' && batch[i]<='9'){
        numCount++;}
    
}
std::cout<<"Number of vowels are "<<vowelCount<<"\nNumber of integers are "<<numCount;
return 0;
} */


//Welcome Function and use of DEFAULT
/*#include<iostream>
using namespace std;
void welcome(string name="User"){
    cout<<"\nWelcome "<<name;
}
int main(){
    welcome();
    welcome("Aastha");
    return 0;
}*/


//Three functions for sum
/* #include<iostream>
using namespace std;
int sum(int a, int b){
    cout<<"\nInt Sum Called";
    return a+b;
}
float sum(float a, float b){
    cout<<"\nFloat Sum Called";
    return a+b;
}
double sum(double a, double b){
    cout<<"\nDouble Sum Called";
    return a+b;
}
int main(){
    cout<<"\nSum: "<<sum(5,10);
    cout<<"\nSum2: "<<sum(23.4578f,87.456f);
    cout<<"\nSum3: "<<sum(23.56,78.99);
}*/
