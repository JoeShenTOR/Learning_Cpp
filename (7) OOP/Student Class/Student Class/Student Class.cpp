#include <iostream>
#include <string>
using namespace std;

class Student {
private:
	int rollNumber;
	string name;
	int mathMarks;
	int phyMarks;
	int chemMarks;

public:
	// constructors
	Student(int roll, string name, int mark1, int mark2, int mark3);
	
	// primary functions
	int totalMarks() {
		return mathMarks + phyMarks + chemMarks;
	}
	char Grade() {
		float average = (totalMarks()) / 3;
		if (average > 60) {
			return 'A';
		}
		else if (average >= 40 && average < 60) {
			return 'B';
		}
		else {
			return 'C';
		}
	}

	// deconstructor
	~Student();
};

Student::Student(int roll, string name, int mark1, int mark2, int mark3) {
	rollNumber = roll;
	this->name = name;
	mathMarks = mark1;
	phyMarks = mark2;
	chemMarks = mark3;
}

Student::~Student() {
	cout << "Student destroyed :)" << endl;
}

int main(void) {
	int rollNum;
	string nameStudent;
	int m1, m2, m3;

	cout << "Enter your roll number: ";
	cin >> rollNum;

	cout << "Enter your marks for math, physics and chemistry: ";
	cin >> m1 >> m2 >> m3;

	cout << "Enter your name: ";
	getline(cin, nameStudent);
	cin.ignore();


	Student starStudent(rollNum, nameStudent, m1, m2, m3);
	cout << "Total Marks: " << starStudent.totalMarks() << endl;
	cout << "Grade of Student: " << starStudent.Grade() << endl;

	return 0;

}