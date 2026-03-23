//Check whether a given string is palindrome or not


#include<iostream>
#include<string>
using namespace std;
int main(){
    string id;
    cout<<"Enter ID: ";
    cin>>id;
    string reversed="";
    for(int i=id.length()-1;i>=0;i--){
        reversed+=id[i];
    }
    if(id==reversed){
        cout<<"\nIt is a Palindrome";
    }
    else{
        cout<<"\nIt is not a Palindrome";
    }

    return 0;
}
