#include <iostream>

using namespace std;

int main()
{
    int age;

    cout << "welcome to the movies" << endl << "please imput your age:";
    cin >> age;
    if (age < 12 || age>60)
    {
        cout << endl << "discount ticket" << endl;
    }
    else
    {
        cout << endl << "regular ticket" << endl;
    }
    return 0;
}