//menu-driven calculator program

#include<iostream>
using namespace std;
int main(){
    int choice=0;
    float a,b;
    while(choice != 5){
        cout<<"\nSelect an operation: \n1.Addition \n2.Subtraction \n3.Multiplication \n4.Division \n5.Exit\nSelect your choice: ";
        cin>>choice;
        if(choice >= 1 && choice <= 4){
            cout<<"Enter two numbers: ";
            cin>>a>>b;
        }
        switch(choice){
            case 1:
                cout<<a+b;
                break;
            case 2:
                cout<<a-b;
                break;
            case 3:
                cout<<a*b;
                break;
            case 4:
                if(b==0){
                    cout<<"Denominator should not be 0.";
                }
                else{
                    cout<<a/b;
                }
                break;
            case 5:
                cout<<"Loop ended";
                break;
            default:
                cout<<"Invalid choice";
        }
    }  
    return 0;
}   
