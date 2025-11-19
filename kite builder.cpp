#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double stickone;
	double sticktwo;
	
	
	cout << "welcome to Dylan Eifert's kite creation calculator" << endl
		 << "please enter the length of your first stick: ";
	cin >> stickone;
	
	cout << endl << "please enter the length of stick two: ";
		cin >> sticktwo;

		double side = sqrt(stickone+sticktwo)/2;
		double perimeter = side*4;
		double area = stickone * sticktwo / 2;

		cout <<
			endl << "the length of each side will be:" << side <<
			endl << "the perimeter will have a tottal lengeth of:" << perimeter <<
			endl << "the tottal area of the kite will be:" << area <<
			endl << "thank you for using our application please come again. " <<
			endl;

		return 0;

}