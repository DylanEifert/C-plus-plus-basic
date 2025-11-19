#include <iostream>
using namespace std;

int main()
{
	int num1;
	int num2;
	double cost1;
	double cost2;

	cout << "please enter number of pens: ";
	cin >> num1;

	cout << endl << "enter pen cost: ";
	cin >> cost1;

	cout << endl << "total cost of pens: " << num1 * cost1 << endl;


	cout << "please enter number of notebooks: ";
	cin >> num2;

	cout << endl << "enter notebook cost: ";
	cin >> cost2;

	cout << endl << "total cost of notebooks: " << num2 * cost2 << endl;

	cout << endl << "total cost: " << (num1 * cost1) + (num2 * cost2);

	return 0;
}
