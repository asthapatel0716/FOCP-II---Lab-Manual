//solution to calculate the roots of a quadratic equation.

#include <iostream>
#include <cmath>      //cmath file for mathematical functions
using namespace std;
int main() {
    float a, b, c;
    float d, root1, root2;
    cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c;
    d= b*b - 4*a*c;
    if(d > 0) {
        root1 = (-b + sqrt(d)) / (2*a);
        root2 = (-b - sqrt(d)) / (2*a);
        cout << "Roots are real and different." << endl;
        cout << "Root1 = " << root1 << endl;
        cout << "Root2 = " << root2 << endl;
    }
    else if(d == 0) {
        root1 = -b / (2*a);
        cout << "Roots are real and equal." << endl;
        cout << "Root1 = Root2 = " << root1 << endl;
    }
    else {
        cout << "Roots are complex (imaginary)." << endl;
    }
    return 0;
}
