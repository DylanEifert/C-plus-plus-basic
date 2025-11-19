#include <iostream>
using namespace std;

int main()
{
	int height;
	int loop = 1;
	

	cout << "input the hight of the triangle:";
	cin >> height;
	cout << endl;

	
	
		for(int loop = 0; loop < height; loop++)
		{
			for (int spaces = 0; spaces <= height - loop; spaces++)
			{
				cout << " ";

			}
			for (int stars = 0; stars <= loop; stars++)
			{
				cout << "*";

			}
			cout << endl;
		}

	return 0;
}