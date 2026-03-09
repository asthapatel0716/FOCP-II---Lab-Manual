// detects whether a letter is vowel, consonant or number

#include<iostream>
using namespace std;
int main(){
    char c;
    cout<<"Enter a letter: ";
    cin>>c;
    if(c >='0' && c<='9'){
        cout<<"It is a number.";
    }
    else
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U'){
        cout<<"It is a vowel.";
    }
    else
    {
        cout<<"It is a consonant.";
    }
    return 0;
}
