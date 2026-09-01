#include <iostream>
using namespace std;

double convert(double light);
int main()
{
	double astro_unit, light_year;
	cout << "Enter the number of light years:";
	cin >> light_year;
	astro_unit = convert(light_year);
	cout << light_year << " light year = ";
	cout << astro_unit << " astronomical units." << endl;
	return 0;
}

double convert(double light)
{
	return 63240 * light;
}