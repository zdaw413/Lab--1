#include <iostream>
using namespace std;
int main()
{
	double sales_base_salary, commission_rate, total_sales, total_pay;
	cout << "  Enter the base salary: ";
	cin >> sales_base_salary;
	cout << "Enter the total_sales: ";
	cin >> total_sales;
	cout << "Enter the commission rate: ";
	cin >> commission_rate;
	total_pay = sales_base_salary + (total_sales * commission_rate);
	cout << "The total pay is: " << total_pay;
	return 0;
}
