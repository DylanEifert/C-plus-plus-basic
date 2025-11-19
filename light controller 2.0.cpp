#include <iostream>
#include <string>
using namespace std;

int main()
{
	char light;
	int speed;
	char emt;

	cout << "what color is the light, please enter R,G,Y: ";
	cin >> light;

	switch (light)
	{
	case 'G':
	case 'g':
	

		cout << endl << "go\n";
		break;

	case 'Y':
	case 'y':

		cout << endl << "What is the speed of the vehicle: ";
		cin >> speed;

		if (speed > 40)
		{
			cout << endl << "Proceed with caution";
		}
		else
		{
			cout << endl << "stop";
		}
		break;

	case 'R':
	case 'r':
	
		cout << endl << "Is the Vehicle an emergency vehicle, enter 1 for yes and 0 for no: ";
		cin >> emt;
		if (emt == 1)
		{
			cout << endl << "allow emergency vehicle";
		}
		else
		{
			cout << endl << "stop";
		}
		break;
	}
			return 0;
}