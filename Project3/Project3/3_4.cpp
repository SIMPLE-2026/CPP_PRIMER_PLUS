#include <iostream>
using namespace std;
const int DAY_TO_HOUR = 24;
const int HOUR_TO_MINUTE = 60;
const int MINUTE_TO_SECOND = 60;

int main()
{
	long long seconds;
	int days, hours, minutes;
	cout << "Enter the number of seconds: ";
	cin >> seconds;
	cout << seconds << " seconds = ";
	days = seconds / (DAY_TO_HOUR * HOUR_TO_MINUTE * MINUTE_TO_SECOND);
	seconds = seconds % (DAY_TO_HOUR * HOUR_TO_MINUTE * MINUTE_TO_SECOND);

	hours = seconds / (HOUR_TO_MINUTE * MINUTE_TO_SECOND);
	seconds = seconds % (HOUR_TO_MINUTE * MINUTE_TO_SECOND);
	minutes = seconds / MINUTE_TO_SECOND;
	seconds = seconds % MINUTE_TO_SECOND;
	cout << days << " days, " << hours << " hours," << minutes << " minutes, "
		<< seconds << " seconds." << endl;
	return 0;
