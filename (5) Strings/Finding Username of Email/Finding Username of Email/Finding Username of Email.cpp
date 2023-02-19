#include <iostream>
#include <string>

using namespace std;

int main(void) {
	int atIndex = 0;
	int validChars = 0;
	string email;
	string username;

	std::cout << "Enter your email: ";
	getline(cin, email);

	atIndex = (int)email.find('@');
	username = email.substr(0, atIndex);

	for (int i = 0; i < atIndex; i++) {
		if (email[i] >= 65 && email[i] <= 122){
			validChars++;
		}
		else if (email[i] == '_' || email[i] == '.') {
			validChars++;
		}
		else if (email[i] >= 48 && email[i] <= 57) {
			validChars++;
		}
	}
	std::cout << endl;

	if (validChars == username.length()) {
		std::cout << username << " is valid." << endl;
	}
	else {
		std::cout << username << " is not valid, only numbers, characters, _ and . are allowed." << endl;
	}

	return 0;
}