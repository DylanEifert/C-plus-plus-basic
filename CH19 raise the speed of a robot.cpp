
#include <iostream>
using namespace std;

void boost_speed(int* speed);

int main()
{
	int robot_speed = 25;

	boost_speed(&robot_speed);


	cout << robot_speed;

	return 0;
}

void boost_speed(int* speed)
{


	if (*speed < 40)
	{
		*speed = *speed + 20;

	}



}