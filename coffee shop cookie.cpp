
#include <iostream>
using namespace std;

int main()
{
	int total;
	cout << "imput total: ";
	cin >> total;

	if (total >= 20)
	{
		cout << endl << "the customer gets a free cookie!" << endl;
	}
	else
	{
		cout << endl << "this customer is not eligable for a free cookie" << endl;
	}
	return 0;
}