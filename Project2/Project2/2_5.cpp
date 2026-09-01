#include <iostream>
using namespace std;

float convert(float f);

int main()
{
	float c_degree, f_degree;
	cout << "Please enter a Celsius value:";
	cin >> c_degree;
	f_degree = convert(c_degree);
	cout << c_degree << " degrees Celsius is ";
	cout << f_degree << " degrees Fahrenheit." << endl;	
	return 0;
}

float convert(float f)
{
	return f * 1.8 + 32;
}
