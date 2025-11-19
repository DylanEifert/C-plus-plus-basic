
#include <iostream>
using namespace std;

int find_maximum(int first, int second);

int main()
{
	int first_input, second_input;

	cout << "Enter two numbers: ";
	cin >> first_input >> second_input;

	int larger_number = find_maximum(first_input, second_input);


	cout << "the larger number is: " << larger_number << endl;
	
	return 0;
}

int find_maximum(int first, int second)
{
	if (first > second)
	{
		return first;
	}
	else
	{
		return second;
	}
}