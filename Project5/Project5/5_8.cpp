#include <iostream>
#include <cstring>
using namespace std;

const int SIZE = 20;
const char FINISHED[] = "done";

int main()
{
	int counter = 0;
	char words[SIZE];
	cout << "Enter words (to stop, type the word done):" << endl;
	while (strcmp(FINISHED, words) != 0)
	{
		counter++;
		cin >> words;
		cin.get();
	}
	cout << "You enter a total of " << counter - 1 << " words." << endl;
	return 0;
}