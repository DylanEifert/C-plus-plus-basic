
#include <iostream>
using namespace std;

int main()
{
    int age;
    char civ;

    cout << "Imput your age: ";
    cin >> age;

    if (age >= 18)
    {
        cout << endl << "are you a US citizen? imput 1 for yes and 0 for no:";
        cin >> civ;

        if (civ == 1 || age >=18)
        {
            cout << endl << "you are eligible to vote" << endl;
        }
        else
        {
            cout << endl << "you must be a US citizen to vote" << endl;
        }
    }
    else
    {
        cout << endl << "you are not old enough to vote" << endl;
    }
    return 0;
}