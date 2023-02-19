#include <iostream>
#include <string>

using namespace std;

int main(void) {
	int strLength;

	string str;
	string revstr;

	cout << "Enter a String to Check if Palidrome: ";
	getline(cin, str);

	// Convert any capitals to lowercase (A=65, Z=90)
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] >= 65 && str[i] <= 90) {
			str[i] += 32;
		}
	}

	strLength = str.length();
	revstr.resize(strLength);

	// Reverses String
	for (int i = 0, j = strLength-1; i < strLength; i++, j--) {
		revstr[i] = str[j];
	} 
	
	revstr[strLength] = '\0';

	// Checks if ASCII value difference is 0 for all characters.
	if (str.compare(revstr) == 0) {
		cout << "String is a palindrome." << endl;
	}
	else {
		cout << "String is not a palindrome." << endl;
	}

	return 0;
}