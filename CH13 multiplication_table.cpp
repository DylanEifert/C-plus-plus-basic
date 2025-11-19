
#include <iostream>
using namespace std;

int main()
{
	int num;
	int multiplier = 0;
	int set = 0;

	cout << "enter a number:";
		cin >> num;

		while(set != 5)
		{
			set = set + 1;

			while(multiplier != 5)
			{
				multiplier = multiplier + 1;

				cout << " " << num * multiplier << " ";
				
			}
		}
		cout << endl;

	return 0;
}
