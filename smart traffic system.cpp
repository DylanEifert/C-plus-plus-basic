
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string light;
	int speed;
	char emt;

	cout << "what color is the light: ";
	cin >> light;

	if (light == "Green" || light == "green")
	{
		cout << endl << "Go" << endl;
	}
	else if (light == "Yellow" || light == "yellow")
	{
		cout << endl << "what is the speed of the vehicle: ";
		cin >> speed;

		if (speed > 40)
		{
			cout << endl << "stop immediately" << endl;
		}
		else
		{
			cout << endl << "proceed with caution" << endl;
		}

	}
	else if (light == "Red" || light == "red")
	{
		cout << endl << "is the vehicle an emergency vehicle? imput 1 for yes and 0 for no:" << endl;
		cin >> emt;

		if (emt == '1')
		{
			cout << endl << "Allow Emergency Vehicle" << endl;
		}
		else
		{
			cout << endl << "stop" << endl;
		}
	}
	else
	{
		cout << endl << "invalid input" << endl;
	}
	return 0;
}