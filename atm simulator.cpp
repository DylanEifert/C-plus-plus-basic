
#include <iostream>
using namespace std;

int main()
{
	int choice;
	int balance = 1000;
	int number;

	cout << "--------------------\n";
	cout << "ATM by Dylan\n";
	cout << "--------------------\n" << endl << endl;

	do
	{

	cout << "--------------------\n";
	cout << "[1] deposit\n";
	cout << "[2] withdraw\n";
	cout << "[3] check balance\n";
	cout << "[4] exit\n";
	cout << "--------------------\n" << endl;

	

		cout << "enter your choice (1-4):";
		cin >> choice;
		cout << endl;

		switch (choice)
		{
		case 1:
		{
			cout << "how much would you like to deposit:";
			cin >> number;

			balance = balance + number;

			cout << endl << "your new balance is $" << balance << endl << endl;
			break;
		}
		case 2:
		{
			cout << "how much would you like to withdraw:";
			cin >> number;

			
				if (number <= balance)
				{
					balance = balance - number;
			    }
				else
				{
					cout << endl << "insufficient funds\n";
				}

			cout << endl << "your new balance is $" << balance << endl << endl;
			break;
		}
		case 3:
		{
			cout << endl << "your balance is $" << balance << endl << endl;
			break;
		}
		case 4:
		{
			cout << "thank you for banking with us today.\n";

			break;
		}
		default:
		{
			cout << "invalid imput please select 1-4\n";
		}
		}

	} while (choice != 4);
	return 0;
}
