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
	CandyBar snake = { "Mocha Munch", 2.3, 350 };
	cout << "My favourite CandyBar is " << snake.brand << "." << endl;
	cout << "And its weight is " << snake.weight << ", calorie is " << snake.calorie;
	cout << "." << endl;
	return 0;
}