#include <iostream>
using namespace std;
int main() {
    string str, rev = "";
    cin >> str;
    for (int i = str.length() - 1; i >= 0; i--) {
        rev += str[i];
    }
    if (str == rev)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
