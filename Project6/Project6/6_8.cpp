#include <iostream>
#include <fstream>
#include <string>
using namespace std;

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
	char read_char;
	int char_counter = 0;
	while (!fin.eof())
	{
		fin >> read_char;
		char_counter++;
	}
	cout << "The file " << file_name << " contains " << char_counter << " characters." << endl;
	fin.close();
	return 0;
}