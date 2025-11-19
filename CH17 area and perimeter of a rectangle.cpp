
#include <iostream>
using namespace std;

int area(int num1, int num2);
int perimeter(int num1, int num2);

int main()
{
	int width;
	int length;

	cout << "input the length: ";
	cin >> length;
	cout << endl;

	cout << "input the width: ";
	cin >> width;
	cout << endl;

	int totalarea = area(length, width);
	int totalperimeter = perimeter(length, width);

	cout << "total area: " << totalarea << endl;
	cout << "total perimeter: " << totalperimeter << endl;

	return 0;
}

int area(int num1, int num2)
{
	return num1 * num2;
}
int perimeter(int num1, int num2)
{
	return 2 * (num1 + num2);
}