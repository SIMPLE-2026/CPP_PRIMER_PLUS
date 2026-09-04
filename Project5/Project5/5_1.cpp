#include <iostream>
using namespace std;

int main()
{
	int min, max, sum = 0;
	cout << "Enter the first numeral: ";
	cin >> min;
	cout << "Enter the second numeral: ";
	cin >> max;

	for (int i = min; i <= max; i++)
	{
		sum += i;
	}
	cout << "The sum of integers from " << min << " +...+ " << max << " is " << sum << endl;
	cout << sum << endl;
	return 0;
}