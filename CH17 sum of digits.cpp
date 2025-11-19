
#include <iostream>
using namespace std;

int sum_of_digits(int number);

int main()
{
	int num;
	cout << "enter a number: ";
	cin >> num;

	int result = sum_of_digits(num);
	cout << "sum of digits = " << result << endl;


	return 0;
}

int sum_of_digits(int number)
{
	int sum = 0;

	while (number > 0)
	{
		int digit = number % 10;
		sum += digit;
		number = number / 10;
	}
	return sum;
}