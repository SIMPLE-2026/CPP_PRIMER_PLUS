#include <iostream>
#include <string>
using namespace std;

const char FINISHED[] = "done";
int main()
{
	int counter = 0;
	string words;
	cout << "Enter words (to stop, type the word done):" << endl;
	while (words != FINISHED)
	{
		counter++;
		cin >> words;
		cin.get();
	}
	cout << "You enter a total of " << counter - 1 << " words." << endl;
	return 0;
}