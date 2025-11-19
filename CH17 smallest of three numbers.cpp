
#include <iostream>
using namespace std;

int largest(int num1, int num2, int num3);
int smallest(int num1, int num2, int num3);

int main()
{
    int number1, number2, number3;

    cout << "input 3 values: ";
    cin >> number1 >> number2 >> number3;

    int small = smallest(number1, number2, number3);
    int large = largest(number1, number2, number3);

    cout << "The smaller number: " << small << endl;
    cout << "The larger number: " << large << endl;
    
    return 0;
}

int largest(int num1, int num2, int num3)
{
    if (num1 > num2 && num1 > num3)
    {
        return num1;
    }
    else if (num2 > num1 && num2 > num3)
    {
        return num2;
    }
    else if (num3 > num1 && num3 > num2)
    {
        return num3;
    }
}
int smallest(int num1, int num2, int num3)
{
    if (num1 < num2 && num1 < num3)
    {
        return num1;
    }
    else if (num2 < num1 && num2 < num3)
    {
        return num2;
    }
    else if (num3 < num1 && num3 < num2)
    {
        return num3;
    }
}