#include <iostream>
#include <string>

using namespace std;

int main(void) {
	int vowels = 0, consanants = 0, words = 1;
	string str;


	cout << "Enter a sentence: ";
	getline(cin, str);
	 
	for (int i = 0; str[i] != '\0'; i++) {
		// Vowels
		if (str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i' || str[i] == 'I' || str[i] == 'o' || str[i] == 'O' || str[i] == 'u' || str[i] == 'U') {
			vowels++;
		}
		else if (str[i] >= 65 && str[i] <= 122) {
			consanants++;
		}
	}

	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] == ' ') {
			words++;
		}
	}

	cout << "Number of vowels: " << vowels << endl;
	cout << "Number of consanants: " << consanants << endl;
	cout << "Number of words: " << words << endl;


	return 0;
}