#include <iostream>
#include <cctype>
using namespace std;

int main()
{
	char input;
	cout << "Enter a character: ";
	cin.get(input);
	while (input != '@')
	{
		if (isdigit(input))
		{
			cin.get(input);
			continue;
		}
		else if (islower(input))
		{
			input = toupper(input);
		}
		else if (isupper(input))
		{
			input = tolower(input);
		}
		cout << input;
		cin.get(input);
	}
	return 0;
}