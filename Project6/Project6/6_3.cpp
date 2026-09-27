#include <iostream>
using namespace std;

void showmenu();
int main()
{
	char choice;
	showmenu();
	cin.get(choice);
	while (choice != 'c' && choice != 'p' && choice != 't' && choice != 't' && choice != 'g')
	{
		cin.get();
		cout << "Please enter a, c, p, t, or g: ";
		cin.get(choice);
	}
	switch (choice)
	{
	case 'c':
		break;
	case 'p':
		break;
	case 't':
		cout << "A maple is a tree.";
		break;
	case 'g':
		break;
	}
	return 0;
}

void showmenu()
{
	cout << "Please enter one of the following choices:\n";
	cout << "c) carnivore\t\t\tp) pianist\n";
	cout << "t) tree\t\t\tg) game\n";
}