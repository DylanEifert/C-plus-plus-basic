
#include <iostream>
using namespace std;

void swap_numbers(int* first, int* second);

int main()
{
	int first_num = 10, second_num = 20;

	swap_numbers(&first_num, &second_num);


	cout << first_num << endl << second_num;

	return 0;
}

void swap_numbers(int* first, int* second)
{
	int firstnum = *first;
	int secondnum = *second;

	*second = firstnum;
	*first = secondnum;




	
}