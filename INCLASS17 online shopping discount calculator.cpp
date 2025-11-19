
#include <iostream>
using namespace std;

float bill;


int main()
{
	float base;

	cout << "enter price of items: ";
	cin >> base;

	if (base > 0 && base < 101)
	{
		bill = base;
	}
	else if (base > 100 && base < 501)
	{
		bill = base * .90;
	}
	else if (base > 500 && base < 1001)
	{
		bill = base * .80;
	}
	else if (base > 1000)
	{
		bill = base * .70;
	}
	else
	{
		cout << "invalid input";
	}

	cout << endl << "your total bill is: $" << bill << endl;

	return 0;
}