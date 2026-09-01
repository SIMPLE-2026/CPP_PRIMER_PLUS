#include <iostream>
using namespace std;
struct CandyBar
{
	char brand[20];
	float weight;
	unsigned int calorie;
};
int main()
{
	CandyBar snack[3] = { {"Mocha Munch", 2.3, 350},
		{"Hershey bar", 4.2, 550}, {"Musketeers", 2.6, 430} };
	cout << "My 1st CandyBar is " << snack[0].brand << "." << endl;
	cout << "And its weight is " << snack[0].weight << ", calorie is " << snack[0].calorie;
	cout << "." << endl;

	cout << "My 2nd CandyBar is " << snack[1].brand << "." << endl;
	cout << "And its weight is " << snack[1].weight << ", calorie is " << snack[1].calorie;
	cout << "." << endl;

	cout << "My 3rd CandyBar is " << snack[2].brand << "." << endl;
	cout << "And its weight is " << snack[2].weight << ", calorie is " << snack[2].calorie;
	cout << "." << endl;

	return 0;
}