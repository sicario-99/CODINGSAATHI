#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    int number, guess, choice, nguess = 1;

    srand(time(0));

    guess = (rand() % 100) + 1; // random number generator formula

    cout << "\t\t\t\tWelcome to Guessing game" << endl;
    cout << "Press 1 to play \nPress 0 to exit \nEnter your choice: ";
    cin >> choice;

    if (choice == 1)
    {
        do
        {
            cout << "\t\t\tGuess the number between 1 to 100." << endl;
            cout << "Enter the number: ";
            cin >> number;

            if (number > guess)
            {
                cout << "you have guessed a higher number" << endl;
            }

            else if (number < guess)
            {
                cout << "you have guessed a smaller number" << endl;
            }

            else if (number == guess)
            {
                cout << "you have guessed the correct number" << endl;
            }
            nguess++;
        }

        while (number != guess);

        cout << "You have gussed the right number in " << nguess << " attemps" << endl;
    }

    else
    {
        exit(0);
    }

    return 0;
}