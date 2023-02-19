#include <iostream>
#include <vector>
using namespace std;

// you look mighty fine today good luck following along w the brown man on yt hes a g

int main(void) {
	vector<int> v = { 10, 20, 40, 90 };
	v.push_back(25);
	v.push_back(70);
	v.pop_back();
	for (auto x : v) {
		cout << x << " ";
	}
	return 0;
}