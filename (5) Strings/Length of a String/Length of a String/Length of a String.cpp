#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main(void) {
	int count=0;

	string str;
	cout << "Enter a string: ";
	getline(cin, str);

	// Method 1
	//cout << str.length() << endl;

	for (int i = 0; str[i] != '\0'; i++) {
		count++;
	}

	cout << count << endl;

	return 0;
}