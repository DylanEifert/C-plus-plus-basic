
#include <iostream>
using namespace std;

int main()
{
	int num;

	cout << "enter a number:";

	cin >> num;

	if (num > 0)
	{
		cout << endl << "Number is positive" << endl;
	}
	if (num < 0)
	{
		cout << endl << "Number is negitive" << endl;
	}
	else if (num == 0)
	{
		cout << endl << "Number is zero" << endl;
	}
	return 0;
}