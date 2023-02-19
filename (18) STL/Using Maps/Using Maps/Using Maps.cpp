#include <iostream>
#include <map>
using namespace std;

int main(void) {
	map<int, string> Mapper;
	Mapper.insert(pair<int, string>(1, "john"));
	Mapper.insert(pair<int, string>(2, "ravi"));
	Mapper.insert(pair<int, string>(3, "khan"));

	map<int, string>::iterator itr;

	for (itr = Mapper.begin(); itr != Mapper.end(); itr++) {
		cout << itr->first << " " << itr->second << endl;
	}

	map<int, string>::iterator itr1;
	itr1 = Mapper.find(2);
	cout << "Value Found is: " << endl;
	cout << itr1->first << " " << itr1->second;



	return 0;
}