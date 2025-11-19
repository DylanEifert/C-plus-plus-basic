
#include <iostream>
using namespace std;

void highest_temp(int* highest, int* new_reading);

int main()
{
	int temp = 0;
	int high = 32;


	cout << "input the curent temprature: ";
	cin >> temp;
	cout << endl;

	highest_temp(&high, &temp);


	cout << high;

	return 0;
}

void highest_temp(int* highest, int* new_reading)
{


	if (*new_reading > *highest)
	{
		*highest = *new_reading;
	}


}