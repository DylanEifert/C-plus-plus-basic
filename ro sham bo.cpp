#include <string>
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    string player;
    srand(time(0));
    int bot = rand() % 3 + 1;
    string botc;

    if (bot == 1)
    {
        botc = "scissors";
    }
    else if (bot == 2)
    {
        botc = "paper";
    }
    else if (bot == 3)
    {
        botc = "rock";
    }
    else
    {
        cout << "error try again" << endl;
    }

    cout << "welcome to the rock paper scissor robot!" << endl
        << "imput rock, papper or scissors:";
    cin >> player;

    if (player == "scissors" || player == "Scissors")
    {
        cout << endl << "the player has selected: " << player
            << endl << "the robot has selected: " << botc
            << endl;
        if (bot == 1)
        {
            cout << endl << "tie game" << endl;
        }
        else if (bot == 2)
        {
            cout << endl << "the player wins" << endl;
        }
        else if (bot == 3)
        {
            cout << endl << "the bot wins" << endl;
        }
    }
    else if (player == "papper" || player == "Papper")
    {
        cout << endl << "the player has selected: " << player
            << endl << "the robot has selected: " << botc
            << endl;
        if (bot == 2)
        {
            cout << endl << "tie game" << endl;
        }
        else if (bot == 3)
        {
            cout << endl << "the player wins" << endl;
        }
        else if (bot == 1)
        {
            cout << endl << "the bot wins" << endl;
        }
    }
    else if (player == "rock" || player == "Rock")
    {
        cout << endl << "the player has selected: " << player
            << endl << "the robot has selected: " << botc
            << endl;
        if (bot == 3)
        {
            cout << endl << "tie game" << endl;
        }
        else if (bot == 1)
        {
            cout << endl << "the player wins" << endl;
        }
        else if (bot == 2)
        {
            cout << endl << "the bot wins" << endl;
        }
    }
    else
    {
        cout << endl << "error try again" << endl;
    }
    return 0;
}