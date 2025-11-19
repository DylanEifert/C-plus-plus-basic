
#include <iostream>
using namespace std;
int total_steps = 0;

int main()
{
	
	char key = 'y';
	do
	{
		int stepsw = 0;

		for (int day = 1; day != 8; day++)
		{
			int stepsd;

			cout << "how many steps did you take today:";
			cin >> stepsd;

			stepsw += stepsd;
			total_steps += stepsd;

			cout << "\n ---sumary for day: " << day << "--- \n";
			cout << "steps today:" << stepsd << "\n";
			cout << "steps so far this week:" << stepsw << "\n";
			cout << "average steps this week:" << stepsw / day << "\n";
			cout << "total steps with this app:" << total_steps << "\n";
			cout << endl;
		}
		cout << "\n\nstart a new week?(Y for yes and N for no):";
		cin >> key;
		cout << endl << endl;
	} while (key == 'y' || key == 'Y');

	return 0;
}