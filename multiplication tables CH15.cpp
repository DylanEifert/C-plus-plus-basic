
#include <iostream>
using namespace std;

int main()
{
    for (int num = 1; num <= 5; num++)
    {
        for (int m = 1; m <= 10; m++)
        {
            cout << num * m << "\t";
        }
        cout << endl;
    }

    return 0;
}