
#include <string>
#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    string lock = "Yes";
    do
    {
    string player;
    string botc;
    int round;
    int win = 0;
    int loss = 0;


    cout << endl << "Welcome to rock paper scissors!\n" <<
        "How many games would you like to play?:";
     cin >> round;

    do
    {
        srand(time(0));
        int bot = rand() % 3;

        round = (round / 2);


        if (bot == 0)
        {
            botc = "scissors";
        }
        else if (bot == 1)
        {
            botc = "paper";
        }
        else if (bot == 2)
        {
            botc = "rock";
        }
        else
        {
            cout << "error try again" << endl;
        }

        cout << endl << "welcome to the rock paper scissor robot!" << endl
            << "imput rock, papper or scissors:";
        cin >> player;

        if (player == "scissors" || player == "Scissors")
        {
            cout << endl << "the player has selected: " << player
                << endl << "the robot has selected: " << botc
                << endl;
            if (bot == 0)
            {
                cout << endl << "tie game" << endl;
            }
            else if (bot == 1)
            {
                cout << endl << "the player wins" << endl;
                win = win + 1;
            }
            else if (bot == 2)
            {
                cout << endl << "the bot wins" << endl;
                loss = loss + 1;
            }
        }
        else if (player == "papper" || player == "Papper")
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
                win = win + 1;
            }
            else if (bot == 0)
            {
                cout << endl << "the bot wins" << endl;
                loss = loss + 1;
            }
        }
        else if (player == "rock" || player == "Rock")
        {
            cout << endl << "the player has selected: " << player
                << endl << "the robot has selected: " << botc
                << endl;
            if (bot == 2)
            {
                cout << endl << "tie game" << endl;
            }
            else if (bot == 0)
            {
                cout << endl << "the player wins" << endl;
                win = win + 1;
            }
            else if (bot == 1)
            {
                cout << endl << "the bot wins" << endl;
                loss = loss + 1;
            }
        }
        else
        {
            cout << endl << "error try again" << endl;
        }
    } while (win <= round && loss <= round);
    if (win > loss)
    {
        cout << endl << "You win!\n";
        round = 0;
        win = 0;
        loss = 0;
    }
    else if (loss > win)
    {
        cout << endl << "You lost... \n";
        round = 0;
        win = 0;
        loss = 0;
    }
    
  

    cout << "would you like to play again?(yes/no):";
    cin >> lock;
    cout << endl;
    }while (lock == "yes" || lock == "Yes");


    cout << endl << "have a nice day!\n";

    return 0;
}