
#include <iostream>
using namespace std;

int main()
{
	int N;
	double total = 0;
	double number;
	double average;
	cout << "enter the number of variables:";
	cin >> N;
	cout << endl;
	for (int i = 1; i <= N; i++)
	{
		cout << "input a value:";
		cin >> number;
		cout << "\n";
		total = total + number;
		
	}
	average = total / N;

	cout << "Average = " << average << "\n";

	return 0;
}