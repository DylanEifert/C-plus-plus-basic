

#include <iostream>
using namespace std;

int main()
{
    int day = 0;
    double rain;
    double total_rain = 0;
    double average;

    cout << "welcome to the rain fall avrage calculator\n";

    do
    {
        day++;

        cout << "enter the rain fall for day " << day << endl;
        cin >> rain;

        total_rain = total_rain + rain;


    } while (day < 7);

    average = total_rain / 7;

    cout << endl << "total rainfall:" << total_rain << "mm";
    cout << endl << "average rainfall:" << average << "mm";

    return 0;
}