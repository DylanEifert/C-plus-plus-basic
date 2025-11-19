
#include <iostream>
using namespace std;

int main()
{
	int capacity;
	int stops;
	int stop;

	cout << "Enter the bus capacity:";
	cin >> capacity;
	cout << endl;

	cout << "Enter number of stops:";
	cin >> stops;
	cout << endl;

	int p = 0;
	int maxp = 0;
	int v = 0;
	int safe = 0;
	int longsafe = 0;

	for (stop = 1; stop <= stops; stop++)
	{

		int change = 0;

		cout << "Stop:" << stop << endl << "Enter the change to the pasanger count:";
		cin >> change;

		p += change;

		if(p < 0)
		{
			p = 0;
		}

		if (p > maxp)
		{
			maxp = p;
		}
		
		if (p <= capacity)
		{
			safe++;
			longsafe = safe;
		}
		else
		{
			v++;
			safe = 0;
		}
		
	}
	cout << "\n=== Trip Summary ===\n"
	 << "maximum occupancy:" << maxp << endl
	 << "number of violations:" << v << endl
	 << "Longest safe streak:" << longsafe << endl;
	return 0;
}