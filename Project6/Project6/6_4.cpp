#include <iostream>
#include <cstring>
using namespace std;

const int strsize = 40;
const int usersize = 40;

struct bop
{
	char fullname[strsize];
	char title[strsize];
	char bopname[strsize];
	int preference;
};
bop bop_user[usersize] =
{ {"Wimp Macho", "Programmer", "MIPS", 0},
{"Raki Rhodes", "Junior Programmer", "", 1},
{"Caliz Laiter", "", "MIPS", 2},
{"Hoppy Hipman", "Analyst Trainee", "", 1},
{"Pat Hand", "", "LOOPY", 2}, };
void showmenu();
void print_by_name();
void print_by_pref();
void print_by_title();
void print_by_bopname();
void create_info();
int main()
{
	char choice;
	showmenu();
	cin.get(choice);
	while (choice != 'q')
	{
		switch (choice)
		{
		case 'a':
			print_by_name();
			break;
		case 'b':
			print_by_title();
			break;
		case 'c':
			print_by_bopname();
			break;
		case 'd':
			print_by_pref();
			break;
		default:
			cout << "Please enter character a, b, c, d, or q: ";
		}
		cin.get();
		cout << "Next choice: ";
		cin.get(choice);
	}
	cout << "Bye!" << endl;
	return 0;
}

void showmenu()
{
	cout << "a. display by name \t\tb. display by title\n";
	cout << "c. display by bopname\t\td. display by preference\n";
	cout << "q. quit\n";
}
void print_by_name()
{
	for (int i = 0; i < usersize; i++)
	{
		if (strlen(bop_user[i].fullname) == 0)
			break;
		else
			cout << bop_user[i].fullname << endl;
	}
}
void print_by_pref()
{
	for (int i = 0; i < usersize; i++)
	{
		if (strlen(bop_user[i].fullname) == 0)
			break;
		else
		{
			switch (bop_user[i].preference)
			{
			case 0:
				cout << bop_user[i].fullname << endl;
				break;
			case 1:
				cout << bop_user[i].title << endl;
				break;
			case 2:
				cout << bop_user[i].bopname << endl;
				break;
			}
		}
	}
}
void print_by_title()
{
	for (int i = 0; i < usersize; i++)
	{
		if (strlen(bop_user[i].fullname) == 0)
			break;
		else
			cout << bop_user[i].title << endl;
	}
}
void print_by_bopname()
{
	for (int i = 0; i < usersize; i++)
	{
		if (strlen(bop_user[i].fullname) == 0)
			break;
		else
			cout << bop_user[i].bopname << endl;
	}
}
void create_info()
{
	for (int i = 0; i < usersize; i++)
	{
		cout << "Enter the user's full name: ";
		cin.getline(bop_user[i].fullname, strsize);
		cout << "Enter the user's title: ";
		cin.getline(bop_user[i].title, strsize);
		cout << "Enter the user's preference: ";
		cin >> bop_user[i].preference;
		cout << "Next...(f for finished): ";
		cin.get();
		if (cin.get() == 'f') break;
	}
}
