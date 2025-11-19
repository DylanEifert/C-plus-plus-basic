
#include <iostream>
using namespace std;

int positive_negative(int num1);
int even_odd(int num2);

int main()
{
	int input;

	cout << "Enter a number: ";
	cin >> input;

	

	if (positive_negative(input) == 1)
	{

		if (even_odd(input) == 1)
		{
			cout << "the number is positive and even" << endl;
		}
		else if (even_odd(input) == 0)
		{
			cout << "the number is positive and odd" << endl;
		}

	}
	else if (positive_negative(input) == 0)
	{
		if (even_odd(input) == 1)
		{
			cout << "the number is negitive and even" << endl;
		}
		else if (even_odd(input) == 0)
		{
			cout << "the number is negitative and odd" << endl;
		}
	}
	

	return 0;
}

int positive_negative(int num1)
{
	if (num1 >= 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}

}

int even_odd(int num2)
{
	if (num2 % 2 == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}