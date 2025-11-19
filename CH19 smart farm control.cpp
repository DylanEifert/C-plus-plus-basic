
#include <iostream>
using namespace std;

void control_water(int* moisture, int sunlight, int hours_sense_irrigation, int* water_limit);

int main()
{
	int soil_moisture = 35;
	int sun_intensity = 75;
	int hours_passed = 9;
	int daily_water_limit = 100;



	control_water(&soil_moisture, sun_intensity, hours_passed, &daily_water_limit);

	cout << "\n updated soil moisture: " << soil_moisture;
	cout << "\nremaining water: " << daily_water_limit << endl;
	

	return 0;
}

void control_water(int* moisture, int sunlight, int hours_sense_irrigation, int* water_limit)
{
	if(*water_limit > 19)
	{

		if (*moisture < 25 && sunlight > 70 && hours_sense_irrigation > 8)
		{
			*moisture = *moisture + 25;
			*water_limit = *water_limit - 20;
			cout << "\n\n=====Emergency irrigation activated.=====\n\n";
		}
		else if (*moisture > 24 && *moisture < 41 && sunlight > 50)
		{
			*moisture = *moisture + 15;
			*water_limit = *water_limit - 10;
		}
		else if (*moisture > 39 && *moisture < 61)
		{
			*moisture = *moisture + 5;
			*water_limit = *water_limit - 5;
		}
		else if (*moisture > 59 && sunlight < 40)
		{
			*moisture = *moisture - 10;
		}
		else if (*moisture > 79)
		{
			*moisture = 80;
			cout << "\n\n=====Warning: Over-watering prevented.=====\n\n";
		}

	}
	else if (*water_limit < 20)
	{
		cout << "\n\n=====Water limit too low, irrigation skipped.=====\n\n";
	}
}