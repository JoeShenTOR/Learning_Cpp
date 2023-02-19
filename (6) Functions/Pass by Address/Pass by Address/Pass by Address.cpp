#include <iostream>
using namespace std;

void swap(int *first, int *second) {
	cout << *first << " " << *second << endl;
	int temp;
	temp = *first;
	*first = *second;
	*second = temp;
	cout << *first << " " << *second << endl;
}

int main(void) {
	int one = 4, two = 8;
	swap(&one, &two);
	return 0;
}