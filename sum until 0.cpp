// sum until 0.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int number;
    int sum = 0;
    do 
    {
        cout << "enter a number to add it to the running sum, or 0 to end the program:";
        cin >> number;

        cout << endl;

        sum = sum + number;


    } while (number != 0);

    cout << "total sum = " << sum << endl;
    return 0;
} 
