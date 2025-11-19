
#include <iostream>
using namespace std;

int main()
{
	int grade;
	cout << "imput student grade: ";
	cin >> grade;

	if (grade >= 90)
	{
		cout << endl << "Your grade is an A" << endl;
	}
	else if (grade >= 80)
	{
		cout << endl << "Your grade is a B" << endl;
	}
	else if (grade >= 70)
	{
		cout << endl << "Your grade is a C" << endl;
	}
	else if (grade >= 60)
	{
		cout << endl << "Your grade is a D" << endl;
	}
	else
	{
		cout << endl << "Your grade is a F" << endl;
	}
	return 0;
}