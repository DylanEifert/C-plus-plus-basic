

#include <iostream>
using namespace std;

float usd_to_yuan(float usd);
float usd_to_zar(float usd);

int main()
{
    char key;
    float money;

        cout << "welcome to Dylan's currency converter!\n\n" << "what opperation would you like me to preform today?\n"
            << "USD to Yuan(enter Y):\n"
            << "USD to Zar(enter Z):\n";
        cin >> key;


    if (key == 'y' || key == 'Y')
    {
        cout << "\nenter an amount in USD that you would like to convert to yuan:";
        cin >> money;
        float total = usd_to_yuan(money);
        cout << endl << "your total is:" << total << endl;
    }
    else if (key == 'z' || key == 'Z')
    {
        cout << "\nenter an amount in USD that you would like to convert to zar:";
        cin >> money;
        float total = usd_to_zar(money);
        cout << endl << "your total is:" << total << endl;
    }
    else
    {
        cout << "\n\n =====INVALID INPUT=====\n\n";
    }
  
    return 0;
}

float usd_to_yuan(float usd)
{

    float yuan = usd * 7.25;

    return yuan;
}
float usd_to_zar(float usd)
{
    float zar = usd * 18.30;

    return zar;
}