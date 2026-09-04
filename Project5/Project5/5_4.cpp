#include <iostream>
using namespace std;
const int DEPOSIT_BASE = 100;
int main()
{
	float daphne_deposit = DEPOSIT_BASE;
	float cleo_deposit = DEPOSIT_BASE;
	int year = 0;
	while (daphne_deposit >= cleo_deposit)
	{
		cout << "In " << year++ << " Year: Daphne = " << daphne_deposit << ", Cleo = " << cleo_deposit << endl;
		cout << "\tCleo = " << cleo_deposit << endl;
		daphne_deposit += 0.1 * DEPOSIT_BASE;
		cleo_deposit += 0.05 * cleo_deposit;
	}
	cout << "In " << year << " Year: Daphne = " << daphne_deposit << ", Cleo = " << cleo_deposit << endl;
	cout << "\tCleo = " << cleo_deposit << endl;
	return 0;
}