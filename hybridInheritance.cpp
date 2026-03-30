// DIAMOND PROBLEM



#include<iostream>
using namespace std;
class A{
    int a;
    public:
    void display_A(){
        cout<<"\nA = "<<a;
    }
    A(){cout<<"\nA constructor called";
    a=10;}
    ~A(){
      cout<<"\nA destructor called";
    }
};
class B:virtual public A{
    int b;
    public:
    void display_B(){
        cout<<"\nB = "<<b;
    }
    B(){
        cout<<"\nB constructor called";
        b=5;
    }
    ~B(){
        cout<<"\nB destructor called";
    }
};
class C:virtual public A{
    int c;
    public:
    void display_C(){
        cout<<"\nC = "<<c;
    }
    C(){
        cout<<"\nC constructor called";
        c=15;
    }
    ~C(){
        cout<<"\nC Destructor called";
    }
};
class D:public B, public C{
    int d;
    public:
    void display_D(){
        display_A();
        display_B();
        display_C();
        cout<<"\nD = "<<d;
    }
    D(){
        d=25;
        cout<<"\n D Constructor called";
    }
    ~D(){
        cout<<"\nD Destructor called";
    }
};
int main(){
    D d1;
    d1.display_D();
    return 0;

}
