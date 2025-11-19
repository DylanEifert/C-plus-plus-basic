#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	char special;
	char transport;
	char date;
	char status;
	int hour;
	int weight;
	int distance;
	int price;
	int age;
	
	cout << "would you like a bus train or plane ticket today?\n"
		<< "enter 1 for bus, 2 for train and 3 for a flight:";
	cin >> transport;
	
	cout << endl << "Please enter the distance you would like to travel with us today:";
	cin >> distance;

	cout << endl << "please enter your age:";
	cin >> age;

	cout << endl << "please enter the day you would like to depart as a number\n"
		<< "1 = Monday\n"
		<< "2 = tuesday\n"
		<< "3 = wednesday\n"
		<< "4 = thursday\n"
		<< "5 = friday\n"
		<< "6 = saturday\n"
		<< "7 = sunday\n";
	cin >> date;

	cout << endl << "please enter the time of departure as a number from 1-24 example 1:00pm would be 13:";
	cin >> hour;

	cout << endl << "please state the weight of your Baggage in (KG):";
	cin >> weight;

	cout << "are you a student or member? enter 1 for student, 2 for member and 0 for neither:";
	cin >> status;


	if (transport == '1')
	{
		int feeW;
		int feeD;
		int feeT;
		int feeS;
		int discount;

		feeD = .50 * distance;
		cout << endl << "would you like a sleeper bus? imput 1 for yes and 0 for no:";
		cin >> special;

		if (special == '1')
		{
			feeS = 1.2;
		}
		else if (special == '0')
		{
			feeS = 1;
		}
		else
		{
			cout << endl << "invalid input try again\n";
		}

		if (weight > 10)
		{
			feeW = weight - 10;
			discount = 1;
		}
		else if (weight == 0)
		{
			if (age < 12)
			{
				discount = .50;
			}
			else if (age >= 60)
			{
				discount = .70;
			}
			else if (status == '1' && distance > 20)
			{
				discount = .90;
			}
			else if (status == '2')
			{
				discount = .95;
			}
			else
			{
				discount = 1;
			}
		}
		else
		{
			feeW = 0;
			discount = 1;
		}

		if (hour >= 7 && hour <= 10)
		{
			feeT = 1.15;
		}
		else if (hour >= 17 && hour <= 20)
		{
			feeT = 1.15;
		}
		else
		{
			feeT = 1;
		}

		price = (((feeD * feeS) * feeT) + feeW) * discount;

		if (price > 2)
		{
			cout << endl << "Your tottal will be $" << price << endl;
		}
		else
		{
			cout << endl << "Your tottal will be $2" << endl;
		}

	}
	else if (transport == '2')
	{
		int feeW;
		int feeD;
		int feeT;
		int feeS;
		int discount;

		feeD = .80 * distance;
		cout << endl << "would you like a first class ticket? imput 1 for yes and 0 for no:";
		cin >> special;

		if (special == '1')
		{
			feeS = 1.5;
		}
		else if (special == '0')
		{
			feeS = 1;
		}
		else
		{
			cout << endl << "invalid input try again\n";
		}

		if (weight > 10)
		{
			feeW = weight - 10;
			discount = 1;
		}
		else if (weight == 0)
		{
			if (age < 12)
			{
				discount = .50;
			}
			else if (age >= 60)
			{
				discount = .70;
			}
			else if (status == '1' && distance > 20)
			{
				discount = .90;
			}
			else if (status == '2')
			{
				discount = .95;
			}
			else
			{
				discount = 1;
			}
		}
		else
		{
			feeW = 0;
			discount = 1;
		}

		if (hour >= 7 && hour <= 10)
		{
			feeT = 1.15;
		}
		else if (hour >= 17 && hour <= 20)
		{
			feeT = 1.15;
		}
		else
		{
			feeT = 1;
		}

		price = (((feeD * feeS) * feeT) + feeW) * discount;

		if (price > 5)
		{
			cout << endl << "Your tottal will be $" << price << endl;
		}
		else
		{
			cout << endl << "Your tottal will be $5" << endl;
		}
	}
	else if (transport == '3')
	{
		int feeW;
		int feeD;
		int feeT;
		int feeS;
		int discount;

		feeD = 2.50 * distance;
		cout << endl << "would you like to fly business? imput 1 for yes and 0 for no:";
		cin >> special;

		if (special == '1')
		{
			feeS = 2.2;
		}
		else if (special == '0')
		{
			feeS = 1;
		}
		else
		{
			cout << endl << "invalid input try again\n";
		}

		if (weight > 15)
		{
			feeW = (weight - 15)*3;
			discount = 1;
		}
		else if (weight == 0)
		{
			if (age < 12)
			{
				discount = .50;
			}
			else if (age >= 60)
			{
				discount = .70;
			}
			else if (status == '1' && distance > 20)
			{
				discount = .90;
			}
			else if (status == '2')
			{
				discount = .95;
			}
			else
			{
				discount = 1;
			}
		}
		else
		{
			feeW = 0;
			discount = 1;
		}

		if (date =='6' || date == '7')
		{
			feeT = 1.10;
		}
		else
		{
			feeT = 1;
		}

		price = (((feeD * feeS) * feeT) + feeW) * discount;

		if (price > 50)
		{
			cout << endl << "Your tottal will be $" << price << endl;
		}
		else
		{
			cout << endl << "Your tottal will be $50" << endl;
		}
	}
	else
	{
		cout << endl << "invalid input try again\n";
	}
	return 0;
}