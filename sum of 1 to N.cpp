
#include <iostream>
using namespace std;

int main()
{
	int L;
	int total = 0;

	cout << "enter a limit:";
	cin >> L;
	cout << endl;
	for (int i = 1; i <= L; i++)
	{

		total = total + i;
		cout << i << " ";
	}
	cout << "SUM = " << total << "\n";

	return 0;
}