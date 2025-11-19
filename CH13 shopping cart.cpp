
#include <iostream>
using namespace std;

int main()
{
    double price;
    double budget;
    double working;
    int num = 0;
    

    cout << "Imput your budget:";
    cin >> budget;
    cout << endl;
    if(budget > 0)
    {

        working = budget;
        do
        {
            cout << "enter item price:";
            cin >> price;
            if (price < 0)
            {
                cout << "invalid imput, try again\n";
            }
            else if (price > 0)
            {
                if (price > working)
                {
                    cout << "item would exceed remaining budget, please add another item or 0 to end the program\n";
                }
                else if (price < working)
                {
                    working = working - price;
                    num = num + 1;
                    cout << "Price is valid adding to cart\n";
                    cout << "$" << working << " remaining\n";
                    cout << endl << "enter another item or 0 to check out.\n";

                }

            }
            else if(price == 0)
            {
                break;
            }
            else
            {
                cout << "invalid imput, try again\n";
            }

        } while (price != 0);
    }
    else
    {
        cout << "error, restart program\n";
    }
    cout << "starting budget $" << budget << endl;
    cout << "money spent $" << budget - working << endl;
    cout << "items purchased " << num << endl;


    cout << "thank you for shopping with us, have a wonderful day.\n";

    return 0;
}