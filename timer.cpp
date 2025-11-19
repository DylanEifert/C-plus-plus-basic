#include <iostream>
#include <ctime>
using namespace std;

int main()
{

    char c = 'c';
    do
    {
        time_t t = time(0);
        cout << t << endl;
    } while (c = 'c');
}