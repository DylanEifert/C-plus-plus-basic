#include <iostream>
using namespace std;

int main()
{
	int limit;
	int num = 1;

	cout << "input how many days youd like in the calander:";
	cin >> limit;
	cout << endl;



	for (int week = 0; week < 5; week++)
	{
		for (int day = 0; day < 7; day++)
		{
			if (num <= limit && num > 9)
			{
				cout << num << " ";
				num++;
			}
			else if (num <= limit && num <= 9)
			{
				cout << num << "  ";
				num++;
			}
		}

		cout << endl;
	}

	return 0;
}