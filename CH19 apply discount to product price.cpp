
#include <iostream>
using namespace std;

void apply_discount(int*price);

int main()
{
	int product_price = 450;

	apply_discount(&product_price);


	cout << product_price;

	return 0;
}

void apply_discount(int* price)
{


	*price = *price * .90;



}