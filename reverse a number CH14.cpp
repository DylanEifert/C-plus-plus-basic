
#include <iostream>
using namespace std;

int main()
{
	int value; // value given by the user
	int rvalue = 0; //the reversed value 
	int lastd; //last didgit of the value given by the user.

	cout << "input a integer:";
	cin >> value;

	do
	{

			lastd = value % 10;
			rvalue = rvalue * 10 + lastd;
			value /= 10;
		

		
	} while (value > 0);

	cout << "the reverse of your integer is:" << rvalue;

	return 0;

}