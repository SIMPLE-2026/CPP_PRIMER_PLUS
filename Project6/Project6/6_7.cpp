#include <iostream>
#include <cctype>

using namespace std;

int main()
{
	char words[40];
	int vowel, consonant, others;
	vowel = consonant = others = 0;
	cout << "Enter words (q to quit): " << endl;
	cin >> words;
	while (strcmp(words, "q") != 0)
	{
		if (!isalpha(words[0]))
		{
			others++;
		}
		else
		{
			switch (words[0])
			{
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				vowel++;
				break;
			default:
				consonant++;
			}
		}
		cin >> words;
	}
	cout << vowel << " words beginning with  vowels" << endl;
	cout << consonant << " words beginning with consonants" << endl;
	cout << others << " others" << endl;
	return 0;
}