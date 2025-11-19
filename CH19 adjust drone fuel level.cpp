
#include <iostream>
using namespace std;

void update_fuel(int* fuel, int* wind_speed);

int main()
{
	int drone_fuel = 100;
	int wind = 0;

	cout << "input the curent wind speed: ";
	cin >> wind;
	cout << endl;

	update_fuel(&drone_fuel, &wind);


	cout << drone_fuel;

	return 0;
}

void update_fuel(int* fuel, int* wind_speed)
{


	if (*wind_speed < 20 )
	{
		*fuel = *fuel - (*fuel * 0.05);
	}
	else if (*wind_speed > 19 && *wind_speed < 41)
	{
		*fuel = *fuel - (*fuel * 0.10);
	}
	else if (*wind_speed > 40)
	{
		*fuel = *fuel - (*fuel * 0.15);
	}

}