
#include <iostream>
using namespace std;

int find_sum(int first, int second);
int find_product(int first, int second);

int main()
{
	int num1, num2;
	cout << "enter two numbers: ";
	cin >> num1 >> num2;

	int total_sum = find_sum(num1, num2);
	int total_product = find_product(num1, num2);

	cout << "SUM = " << total_sum << endl;
	cout << "Product = " << total_product << endl;

	return 0;
}

int find_sum(int first, int second)
{
	return first + second;
}

int find_product(int first, int second)
{
	return first * second;
}