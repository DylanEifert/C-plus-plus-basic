
#include <iostream>
using namespace std;

int square_number(int num);

int main()
{
	int input;
	cout << "Enter an integer: ";
	cin >> input;

	int squared_value = square_number(input);

	

	return 0;
}

int square_number(int num)
{
	int result = num * num;
	return result;
}