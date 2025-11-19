// smart home2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int choice;
	int light = 0;

	cout << "--------------------\n";
	cout << "smart home by Dylan\n";
	cout << "--------------------\n" << endl << endl;

	cout << "--------------------\n";
	cout << "[1] turn on\n";
	cout << "[2] turn off\n";
	cout << "[3] status\n";
	cout << "[4] exit app\n";
	cout << "--------------------\n" << endl;

	do
	{

		cout << "enter your choice (1-4):";
		cin >> choice;
		cout << endl;

		switch (choice)
		{
		case 1:
		{
			if (light == 0)
			{
				cout << "light is now on. \n";
				light = 1;
			}
			else
			{
				cout << "the light is allready on. \n";

			}
			break;
		}
		case 2:
		{
			if (light == 1)
			{
				cout << "light is now off. \n";
				light = 0;
			}
			else
			{
				cout << "the light is allready off. \n";

			}
			break;
		}
		case 3:
		{
			if (light == 1)
			{
				cout << "light is on. \n";

			}
			else
			{
				cout << "the light is off. \n";

			}
			break;
		}
		case 4:
		{
			cout << "closing program.\n";

			break;
		}
		default:
		{
			cout << "invalid imput please select 1-4\n";
		}
		}

	}while(choice != 4);
	return 0;
}
