// atm pin check.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int pin;

	cout << "Enter your ATM pin: ";
	cin >> pin;

	while (pin != 1234)
	{
		cout << "Wrong pin, try again" << endl;
		cin >> pin;
	}
	cout << "acess granted\n";
	
	return 0;
}