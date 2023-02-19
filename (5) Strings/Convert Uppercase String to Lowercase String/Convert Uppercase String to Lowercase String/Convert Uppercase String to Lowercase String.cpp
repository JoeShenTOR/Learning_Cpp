#include <iostream>
#include <string>

using namespace std;

int main(void) {

	string uppercaseWord;
	

	cout << "Enter a uppercase word: ";
	getline(cin, uppercaseWord);

	// +32 (A = 65, Z = 90)
	for (int i = 0; uppercaseWord[i] != '\0'; i++) {
		if (uppercaseWord[i] == ' ') {						// Will not change space.
			continue;
		}
		else if (uppercaseWord[i] >= 65 && uppercaseWord[i] <= 90) {
			uppercaseWord[i] = uppercaseWord[i] + 32;
		}
	}

	cout << uppercaseWord << endl;

	return 0;
}