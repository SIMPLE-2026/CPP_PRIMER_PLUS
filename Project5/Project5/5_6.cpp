#include <iostream>
using namespace std;
int main()
{
	const string Month[] = { "JAN", "FEB", "MAR", "APR", "MAY", "JUN", "JUL", "AUG", "SEP", "OCT",
		"NOV", "DEC" };
	int sale_amount[3][12] = {};
	unsigned int sum = 0;
	for (int i = 0; i < 3; i++)
	{
		cout << "Starting " << i << " year's data." << endl;
		for (int j = 0; j < 12; j++)
		{
			cout << "Enter the sale amount of " << Month[j] << ":";
			cin >> sale_amount[i][j];
		}
		cout << "End of " << i + 1 << " year's data." << endl;
	}
	cout << "Input DONE!" << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 12; j++)
		{
			cout << Month[j] << " SALE :" << sale_amount[i][j] << endl;
			sum += sale_amount[i][j];
		}
		cout << "Total sale" << sum << " " << i + 1 << " year." << endl;
	}
	return 0;
}