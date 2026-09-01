#include <iostream>
using namespace std;
struct Pizza
{
	char company[40];
	float diameter;
	float weight;
};
int main()
{
	Pizza dinner;
	cout << "Enter the Pizza's information: " << endl;
	cout << "Pizza's Company: ";
	cin.getline(dinner.company, 40);
	cout << "Pizza's diameter(inchs): ";
	cin >> dinner.diameter;

	cout << "CandBar's weight(pounds): ";
	cin >> dinner.weight;
	cout << "The lunch pizza is " << dinner.company << "." << endl;
	cout << "And its diameter is " << dinner.diameter << "inch, weight is " << dinner.weight;
	cout << "pounds." << endl;
	return 0;
}