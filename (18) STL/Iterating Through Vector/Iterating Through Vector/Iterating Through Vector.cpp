#include <iostream>
#include <vector>
using namespace std;



int main(void) {
	vector <int> numbers = { 10, 20, 40, 90 };
	numbers.push_back(25);
	numbers.push_back(70);
	vector<int>::iterator itr;

	for (itr = numbers.begin(); itr != numbers.end(); itr++) {
		cout << *itr << " ";
	}

	return 0;
}