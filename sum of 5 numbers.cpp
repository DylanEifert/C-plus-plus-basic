
#include <iostream>

using namespace std;

int main()
{
	int number;
	int sum = 0;
	int loop = 0;

	while (loop < 5)
	{
		cout << "Enter a number:";
		cin >> number;

		sum = sum + number;

		loop = loop + 1;
	}

	cout << "Sum = " << sum << endl;
	return 0;
}