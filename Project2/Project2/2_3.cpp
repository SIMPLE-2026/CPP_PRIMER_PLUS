#include <iostream>
using namespace std;

void print_mice(void);
void print_run(void);

int main()
{
	print_mice();
	print_mice();
	print_run();
	print_run();

	return 0;
}

void print_mice(void)
{
	cout << "Three blind mice" << endl;
}
void print_run(void)
{
	cout << "See how they run" << endl;
