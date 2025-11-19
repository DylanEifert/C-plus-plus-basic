
#include <iostream>
using namespace std;

int main()
{
	int num1, num2, result;
	char op;

	cout << "enter the first number: ";
	cin >> num1;

	cout << endl << "enter the operation: ";
	cin >> op;

	cout << endl << "enter the second number: ";
	cin >> num2;

	switch (op)
	{
	case '+':
		result = num1 + num2;
		cout << endl << result;
		break;

	case '-':

		result = num1 - num2;
		cout << endl << result;
		break;

	case '/':
		
		if (num2 == 0)
		{
			cout << endl << "Error cannot devide by 0";
		}
		else
		{
			result = num1 / num2;
		cout << endl << result;
		break;
		}

	case '*':

		result = num1 * num2;
		cout << endl << result;
		break;

	default:

		cout << endl << "Invalid operator.";
		break;

	}
	return 0;
}