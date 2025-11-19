
#include <iostream>
using namespace std;
int min = -2;
int max = 10;
int min_floor, max_floor, invalid_moves = 0;

int main()
{
	int opperations = 0;
	int key = 1;
	int floor = 0;
	char input;

	cout << "===welcome to the Dylan elevator system===\n\n";

	do
	{


		cout << "you are on floor " << floor << endl << endl;

		cout << "Input U to go up one floor\n";
		cout << "Input D to go down one floor\n";
		cout << "Input S to stay on the same floor\n";
		cout << "Input Q to go to break and exit the program\n";
		cin >> input;
		if (input != 'q' && input != 'Q')
		{

			switch (input)
			{
			case 'U':
			case 'u':
				if (floor < 10)
				{
					floor++;
					if (floor > max_floor)
					{
						max_floor = floor;
					}
				}
				else if (floor >= 10)
				{
					floor = 10;
					invalid_moves++;
				}
				cout << "\ngoing up one floor" << endl;
				break;

			case 'd':
			case 'D':
				if (floor > -2)
				{
					floor--;
					if (floor < min_floor)
					{
						min_floor = floor;
					}
					opperations++;
				}
				else if (floor <= -2)
				{
					floor = -2;
					invalid_moves++;
				}
				cout << "\ngoing down one floor" << endl;
				opperations++;
				break;

			case 's':
			case 'S':
				cout << "\ndoors opening" << endl;
				break;
			default:
				cout << "\ninvalid input\n";
				break;
			}


			
			
		}
		else
		{
			key = 0;
		}

	} while (key == 1);

	cout << "Number of opperations: " << opperations << endl;
	cout << "max floor: " << max_floor << endl;
	cout << "min floor: " << min_floor << endl;
	cout << "current floor: " << floor << endl;

	return 0;


}