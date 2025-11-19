
#include <iostream>
using namespace std;
int readings = 0;


int main()
{
	int temp;
	char key = 'y';

		do
		{
			cout << "input the temerature in Celsius:";
			cin >> temp;


			if (temp < 15)
			{
				cout << "\nthe temprature is cold\n";
			}
			else if (temp >= 30)
			{
				cout << "\nthe temprature is hot\n";
			}
			else
			{
				cout << "\nthe temprature is warm\n";
			}
			readings++;
			cout << "\n number of readings: " << readings << endl;

			cout << "would you like to run the program again? (y for yes n for no): ";
			cin >> key;
		} while (key == 'Y' || key == 'y');

	return 0;
}