#include <iostream>
using namespace std;
int main() {
    int count_z = 0, count_o = 0;
    string name;
    cin >> name;
    for (int i = 0; i < name.length(); i++) {
        if (name[i] == 'z') {
            count_z++;
        } else {
            count_o++;
        }
    }
    if (count_z * 2 == count_o) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    return 0;
}
