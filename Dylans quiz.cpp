#include <iostream>
using namespace std;

int main()
{
	string q1;
	string q2;
	string q3;
	
	cout << "Welcome to Dylan's warhammer 40,000 quiz!" <<
		endl << " please imput your answer in lower case" << endl << endl;

	cout << "quesion one" << endl << "what is the name of the space elves that caused the birth of she who thirsts:";
	cin >> q1;

	if (q1 == "eldar")
	{
		cout << endl << "tyranids are a bunch of what:";

		cin >> q2;

		if (q2 == "filthy xenos" || q2 == "xenos" || q2 == "bugs" || q2 == "funny widdle guys")
		{
			cout << endl << "where primarus a stupid idea:";

			cin >> q3;
			if (q3 == "yes")
			{
				cout << endl << "You win!" << endl;
			}
			else
			{
				cout << endl << "Wrong, try again" << endl;
			}
		}
		else
		{
			cout << endl << "Wrong, try again" << endl;
		}
	}
	else
	{
		cout << endl << "Wrong, try again" << endl;
	}
	return 0;
}