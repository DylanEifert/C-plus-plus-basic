

#include <iostream>
using namespace std;
bool strong_code(int code);


int main()
{
    int pin;

    cout << "Enter a 4 didgit pin:";
    cin >> pin;

    bool pass_fail = strong_code(pin);

    if (pass_fail == 1)
    {
        cout << "\n your password is strong\n";
    }
    else
    {
        cout << "\n your password is weak\n";
    }

    return 0;
}

bool strong_code(int code)
{
    int timer1 = code;
    int total = 0;
    int last = 0;
    int first = 0;
    int strong;
    int run = 0;

    do
    {
        
        int last_didgit = timer1 % 10;
        if (run == 0)
        {
            last = last + last_didgit;
        }
        else if (run == 3)
        {
            first = first + last_didgit;
        }

        total = total + last_didgit;
        timer1 = timer1 / 10;
        run++;
    } while (timer1 > 0);
   
  

    if (total % 2 == 0 && last != first)
    {
        strong = 1;

    }
    else
    {
        strong = 0;
    }
    return strong;
}