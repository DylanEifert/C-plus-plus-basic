#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double x1;
	double x2;
	double y1;
	double y2;
	double z1;
	double z2;

	cout << "writes of activation sucsessful" <<
		endl << "navigation computer online....." <<
		endl << "loading nav program, for planet to planet navigation" <<
		endl;

	cout << "imput planet one nav coordinates..." << endl;
	cout << "planet one X coordinate:";
	cin >> x1;
	cout << endl << "planet one Y coordinate:";
	cin >> y1;
	cout << endl << "planet one Z coordinate:";
	cin >> z1;

	cout << endl << "imput planet two nav coordinates..." << endl;
	cout << "planet two X coordinate:";
	cin >> x2;
	cout << endl << "planet two Y coordinate:";
	cin >> y2;
	cout << endl << "planet two Z coordinate:";
	cin >> z2;

	double d = sqrt(pow((x2-x1),2) + pow((y2-y1),2) + pow((z2-x1),2));
	double m = ((x1 + x2) / 2, (y1 + y2) / 2, (z1 + z2) / 2);
	double fuel = d * 2.5;

	cout << endl <<
		"planet one is at coordinate: " << (x1 * y1 * z1) << endl <<
		"planet two is at coordinate: " << (x2 * y2 * z2) << endl <<
		"the distance between these two points is: " << d << " light years" << endl <<
		"you will need: " << fuel << " power cells to reach this destination" << endl <<
		"station at halfway point detected recomend stoping at: " << m << " for refueling" << endl
		<< "comoutations complete";

	return 0;


}