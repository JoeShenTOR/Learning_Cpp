#include <iostream>


int main() {
	float basic_Sal;
	float percent_Allow;
	float percent_Deduct;
	float net_Salary;

	std::cout << "Enter Basic Salary: ";
	std::cin >> basic_Sal;
	std::cout << "Enter Percent Allowance: ";
	std::cin >> percent_Allow;
	std::cout << "Enter Percent Deductions: ";
	std::cin >> percent_Deduct;
	
	net_Salary = basic_Sal + ((basic_Sal * (percent_Allow/100)) - (basic_Sal * (percent_Deduct/100)));

	std::cout << "Net Salary: " << net_Salary << std::endl;

	return 0;

}