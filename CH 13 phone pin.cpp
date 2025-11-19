
#include <iostream>
using namespace std;

int main()
{
	int pin = 4321;
	int imput;
	char lock;

	do
	{

		cout << "Enter your pin:";
		cin >> imput;

		if (imput == pin)
		{
			cout << "Unlocked!\n";

		}
		else
		{
			do
			{
				cout << endl << "Incorrect; try again.\n";
				cin >> imput;
			} while (imput != pin);
			cout << "Unlocked!\n";
		}
		cout << "Lock phone and try again? (y/n): ";
		cin >> lock;
	} while (lock == 'Y' || lock == 'y');
	
	return 0;
}