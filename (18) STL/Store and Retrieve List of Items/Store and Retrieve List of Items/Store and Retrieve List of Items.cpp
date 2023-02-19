#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Item {
private:
	string Name;
	int price;
	int quantity;
public:
	// Constructor
	Item(string n, int p, int q);
	// Accessor
	void price() {
		price = p;
	}
	// Mutator
	// Deconstructor
	~Item();
};

Item::Item(string n, int p, int q) {
	Name = n;
	price = p;
	quantity = q;
}

Item::~Item() {
	cout << "Item Destroyed!" << endl;
}

int main(void) {

	return 0;
}