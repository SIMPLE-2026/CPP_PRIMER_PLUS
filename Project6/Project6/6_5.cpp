#include <iostream>

using namespace std;
int main()
{
	float tax, salary = 0.0;
	cout << "Hello, enter your salary to calculate tax:";
	cin >> salary;
	while (salary > 0)
	{
		if (salary <= 5000)
		{
			tax = 0;
		}
		else if (salary <= 15000)
		{
			tax = (salary - 5000) * 0.10;
		}
		else if (salary <= 35000)
		{
			tax = 10000 * 0.10 + (35000 - 15000) * 0.15;
		}
		else if (salary > 35000)
		{
			tax = 10000 * 0.10 + 20000 * 0.15 + (salary - 35000) * 0.20;
		}
		cout << "Your salary is " << salary << " tvarps, and you should pay ";
		cout << tax << " trarps." << endl;
		cout << "enter your salary to calculate tax:";
		cin >> salary;
	}
	cout << "Bye!" << endl;
	return 0;
}