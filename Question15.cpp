//Accept n numbers and display the largest


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of entries: ";
    cin>>n;
    float sales[n];
    for(int i=0;i<n;i++){
        cout<<"Enter sales figure "<<i+1<<": ";
        cin>>sales[i];
    }
    float max=sales[0];
    for(int i=1;i<n;i++){
        if(sales[i]>max){
            max=sales[i];
        }
    }
    cout<<"\nLargest sales figure = "<<max;
    return 0;
}
