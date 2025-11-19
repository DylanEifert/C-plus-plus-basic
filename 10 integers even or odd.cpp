
#include <iostream>
using namespace std;

int main()
{
	int input;
	int even = 0;
	int odd = 0;
	int loop = 0;

	do
	{
		loop++;

		cout << "enter Number " << loop << ":";
		cin >> input;
		cout << endl;

		if (input % 2 == 0)
		{
			even++;
		}
		else
		{
			odd++;
		}


	} while (loop < 10);

	cout << endl << "total even numbers:" << even;
	cout << endl << "total odd numbers:" << odd << endl;



	return 0;
}