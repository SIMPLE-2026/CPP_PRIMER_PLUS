#include <iostream>
using namespace std;
const int FOOT_TO_INGH = 12;

int main()
{
	int height;
	cout << "Enter your height in inchs_ : "	;
	cin >> height;
	cout << endl << "Your Height convert to " << height / FOOT_TO_INGH;
	cout << " foot and " << height % FOOT_TO_INGH << " inch height." << endl;
	return 0;
}