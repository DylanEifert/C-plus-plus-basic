
#include <iostream>
using namespace std;
float gross(int c, int a);
float tax(float g);
float net(float g, float t);


int main()
{

	int adult;
	int child;

	cout << "inpput the number of adult tickets sold:";
	cin >> adult;

	cout << "\n input the number of children's tickets sold:";
	cin >> child;

	float gross_income = gross(child, adult);
	float taxed_amount = tax(gross_income);
	float total_profit = net(gross_income,taxed_amount);

	cout << endl
		<< "ntotal income : $" << gross_income << endl
		<< "taxes: $" << taxed_amount << endl
		<< "net profit : $" << total_profit << endl;

	return 0;
}

float gross(int c, int a)
{
	return (a * 12) + (c * 8);

}
float tax(float g)
{
	return (g * .20);
}
float net(float g, float t)
{
	return (g - t);
}