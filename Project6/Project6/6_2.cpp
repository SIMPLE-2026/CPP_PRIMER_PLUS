#include <iostream>
#include <array>
using namespace std;

int main()
{
	array<double, 10> donation;
	double input;
	int counter = 0;
	double average, sum = 0;
	int bigger = 0;
	cout << "Enter the double numerial: ";
	cin >> input;
	while (input != 0 && counter < 10)
	{
		donation[counter++] = input;
		cout << "No." << counter << "Data input to Array." << endl;
		cout << "Enter the double numerial: ";
		cin >> input;
	}
	for (int i = 0; i < counter; i++)
	{
		sum += donation[i];
	}
	average = sum / counter;
	for (int i = 0; i < counter; i++)
	{
		if (donation[i] > average)
		{
			bigger++;
		}
	}
	cout << "The Average is " << average << " and " << bigger;
	cout << " data bigger than average." << endl;
	return 0;
}