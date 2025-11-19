#include <iostream>
using namespace std;

int main()
{
	
	int tracker = 1;

		for (int paternH = 0; paternH < 8; paternH++)
		{
			if (tracker == 1)
			{
				cout << "#.#.#.#.\n";
				tracker--;
			}
			else if (tracker == 0)
			{
				cout << ".#.#.#.#\n";
				tracker++;
			}
		}

		cout << endl;
	

	return 0;
}