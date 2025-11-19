
#include <iostream>
using namespace std;

float bill;


int main()
{
	float energy;

	cout << "enter amount of (kWh) used: ";
	cin >> energy;

	if (energy > 0 && energy < 101)
	{
		bill = 1.50 * energy;
	}
	else if(energy > 100 && energy < 301)
	{
		bill = 2 * energy;
	}
	else if (energy > 300 && energy < 501)
	{
		bill = 3 * energy;
	}
	else if (energy > 500)
	{
		bill = 5 * energy;
	}
	else
	{
		cout << "invalid input";
	}

	cout << endl << "your total bill is: $" << bill << endl;

	return 0;
}