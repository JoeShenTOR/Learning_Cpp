#include <iostream>
#include <string>

using namespace std;

int main(void) {
	
	string str = "First";
	string str2 = "Second";

	str.swap(str2);
	cout << str << endl;
	cout << str2 << endl;
	
	return 0;
}