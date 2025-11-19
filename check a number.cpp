
#include <iostream>
using namespace std;

int main()
{
	int number;

	cout << "enter a number: ";

	cin >> number;

	if (number > 0)
	{
		cout << endl << "the number is positive";
	}
	else if (number < 0)
	{
		cout << endl << "the number is negative";
	}
	else
	{
		cout << "the number is zero";
	}
	return 0;
}