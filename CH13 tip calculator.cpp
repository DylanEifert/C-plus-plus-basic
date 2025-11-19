
#include <iostream>
using namespace std;


int main()
{
    double add;
    double bill;
    double tip;
    double total;
    char key = 'y';
    do
    {

        cout << "enter the total:";
        cin >> bill;

        while (bill <= 0)
        {
            cout << endl << "please enter a valid amount:";
            cin >> bill;
            cout << endl;
        }
        cout << endl << "Enter tip percent(10/15/20):";
        cin >> tip;

        while (tip != 10 && tip != 15 && tip != 20)
        {
            cout << endl << "please enter (10/15/20):";
            cin >> tip;
            cout << endl;
        }


        tip = tip / 100;
        tip = bill * tip;
        total = bill + tip;

        cout << "Food:" << bill <<
            endl << "Tip:" << tip <<
            endl << "Total:" << total <<
            endl;

        cout << "Calculate another bill? (y/n):";
        cin >> key;
      

    } while (key == 'y' || key == 'Y');


    return 0;
}