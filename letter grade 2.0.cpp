#include <iostream>
using namespace std;

int main()
{
	int score;
	int total;

	cout << "What is the student's score:";
	cin >> score;

	if (score < 0 || score > 100)
	{
		cout << endl << "Invalid score\n";
		return 0;
	}
	else
	{
		total = score / 10;

		switch (total)
		{
		case 10:
		case 9:
		{
			cout << endl << "Grade is an A\n";
			break;
		}
		case 8:
		{
			cout << endl << "Grade is a B\n";
			break;
		}
		case 7:
		{

			cout << endl << "Grade is a C\n";
			break;
		}
		case 6:
		{
			cout << endl << "Grade is a D\n";
			break;
		}
		default:
		{
			cout << endl << "Grade is an F\n";
			break;
		}
		return 0;
		}
	}
}

//90-100 a, 80-89 b, 70-79 c, 60-69 d, else f