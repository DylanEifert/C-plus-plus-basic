
#include <iostream>
using namespace std;

int main()
{
    int age;
    int salery;
    int credit;

    cout << "Imput your age: ";
    cin >> age;

    if (age >= 21)
    {
        cout << endl << "imput your salery:";
        cin >> salery;

        if (salery >= 30000 && age >= 21)
        {
            cout << endl << "imput your credit score:";
            cin >> credit;

            if (salery >= 30000 && age >= 21 && credit >= 650)
            {
                cout << endl << "Loan Approved" << endl;
            }
            else
            {
                cout << endl << "not eligible (low credit score)" << endl;
            }
        }
        else
        {
            cout << endl << "not eligible (low income)" << endl;
        }
    }
    else
    {
        cout << endl << "not eligible (too young)" << endl;
    }
    return 0;
}