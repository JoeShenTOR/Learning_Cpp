#include <iostream>
#include <string>

using namespace std;

int main(void) {

	string lowerStr;

	cout << "Enter a lowercase string: ";
	getline(cin, lowerStr);

	// (a = 97, z = 122) 
	for (int i = 0; lowerStr[i] != '\0'; i++) {
		if (lowerStr[i] >= 97 && lowerStr[i] <= 122) {
			lowerStr[i] = lowerStr[i] - 32;
		}
	}

	cout << lowerStr << endl;

	return 0;
}