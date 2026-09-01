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
	Pizza* ppizza = new Pizza;
	cout << "Enter the Pizza's information: " << endl;
	cout << "Pizza's diameter(inchs): ";
	cin >> ppizza->diameter;

	cout << "Pizza's Company:";
	cin.getline(ppizza->company, 40);

	cout << "CandBar's weight(pounds): ";
	cin >> ppizza->weight;
	cout << "The lunch pizza is " << ppizza->company << "." << endl;
	cout << "And its diameter is " << ppizza->diameter << "inch, weight is " << ppizza->weight;
	cout << "pounds." << endl;
	delete ppizza;
	return 0;
}