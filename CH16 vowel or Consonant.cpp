
#include <iostream>
using namespace std;


int main()
{
	char input;

	cout << "Input a letter: ";
	cin >> input;

	if (input >= 'a' && input <= 'z')
	{
		switch (input)
		{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
			cout << "\nyou entered a vowel\n";
			break;

		default:

			cout << "\nyou entered a Consonant\n";
			break;
		}
	}
	else
	{
		cout << "\n invalid input \n";
	}
	return 0;
}