#include <iostream>
using namespace std;
int main() {
	int num;
	std::string name;
	cin >> num;    //Reading input from STDIN
	//cin>>name;
	std::cin.ignore();
	getline(cin,name);
	cout<<num*2<<endl<<name;
	return 0;
		
}
