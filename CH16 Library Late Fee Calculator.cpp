

#include <iostream>
using namespace std;

int main()
{
	int booknum;
	int rotation = 1;
	int total_fee = 0;

	cout << "how many books are being turned in:";
	cin >> booknum;

	while (rotation <= booknum)
	{
		int day = 0;
		cout << "\nhow many days past its due date is book " << rotation << ":";
		cin >> day;
		if(day > 0 && day < 6)
		{
			total_fee += day * 1;
			cout << "\n the late fee for this book will be: $" << day * 1 << endl;
		}
		else if (day > 5 && day < 11)
		{
			total_fee += day * 2;
			cout << "\n the late fee for this book will be: $" << day * 2 << endl;
		}
		else if (day > 10)
		{
			total_fee += day * 5;
			cout << "\n the late fee for this book will be: $" << day * 5 << endl;
		}
		else
		{
			total_fee += 0;
			cout << "\n no late fee, thank you for returning this book\n ";
		}

		rotation++;
	}
	cout << "\n the total bill will be: $" << total_fee;

	return 0;
}