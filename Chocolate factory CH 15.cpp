
#include <iostream>
using namespace std;

int main()
{
	int r;
	int c;

	cout << "enter number of rows:";
	cin >> r;

	cout << "enter number of columns:";
	cin >> c;

	int dark = 0;
	int milk = 0;
	int white = 0;

	cout << "\n\n\n";

	for (int row = 1; row <= r; row++)
	{
		for (int column = 1; column <= c; column++)
		{
			if (column % 2 == 0)
			{
				cout << "D ";
				dark++;
			}
			else if (row % 2 == 0)
			{
				cout << "M ";
				milk++;
			}
			else
			{
				cout << "W ";
				white++;
			}
		}
		cout << endl;
	}
	int total = dark + white + milk;

	cout << "\n---summary---\n";
	cout << "Dark chocolates: " << dark << endl;
	cout << "milk chocolates: " << milk << endl;
	cout << "white chocolates: " << white << endl;
	cout << "total chocolates: " << total << endl;

	return 0;
}