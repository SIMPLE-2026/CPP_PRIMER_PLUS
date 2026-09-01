#include <iostream>
using namespace std;

void format_print(int hour, int minute);

int main()
{
	float hours, minutes;
	cout << "Enter the number of hours: ";
	cin >> hours;
	cout << "Enter the number of minutes: ";
	cin >> minutes;
	format_print(hours, minutes);
	return 0;
}

void format_print(int hour, int minute)
{
	cout << "Time: " << hour << ":" << minute << endl;
}