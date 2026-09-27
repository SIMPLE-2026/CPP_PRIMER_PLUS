#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct patrons
{
	string full_name;
	double fund;
};
int main()
{
	ifstream fin;
	string file_name;
	cout << "Enter the file name: ";
	getline(cin, file_name);
	fin.open(file_name);
	if (!fin.is_open())
	{
		cout << "Error to open file." << endl;
		exit(EXIT_FAILURE);
	}
	int patrons_number;
	patrons* ppatrons;
	int id = 0;
	bool empty = true;

	fin >> patrons_number;
	if (patrons_number <= 0)
	{
		exit(EXIT_FAILURE);
	}
	ppatrons = new patrons[patrons_number];
	fin.get();
	while (!fin.eof() && id < patrons_number)
	{
		getline(fin, ppatrons[id].full_name);
		cout << "Read Name: " << ppatrons[id].full_name << endl;
		fin >> ppatrons[id].fund;
		cout << "Read fund:" << ppatrons[id].fund << endl;
		fin.get();
		id++;
	}
	fin.close();
	cout << "Grand Patrons" << endl;
	for (int i = 0; i < patrons_number; i++)
	{
		if (ppatrons[i].fund >= 10000)
		{
			cout << ppatrons[i].full_name << " : " << ppatrons[i].fund << endl;
			empty = false;
		}
	}
	if (empty)
		cout << "NONE" << endl;
	empty = false;
	cout << "Patrons" << endl;
	for (int i = 0; i < patrons_number; i++)
	{
		if (ppatrons[i].fund < 10000)
		{
			cout << ppatrons[i].full_name << " : " << ppatrons[i].fund << endl;
		}
	}
	if (empty) cout << "NONE" << endl;
	return 0;
}