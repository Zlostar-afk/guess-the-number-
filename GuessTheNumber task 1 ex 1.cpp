#include <iostream>//library
#include <cstdlib>//library
#include <ctime> //library
using namespace std; //part of library iostream

int main()
{
    srand(time(0)); //seed random number generator
    int num = rand() % 100 + 1; // random number between 1 and 100
    cout << "Guess My Number Game\n\n"; // Title

    int guess = 0; // int for the guess of the user
    while (guess != num) { //loop for the repeating, until the guess is the same as the number
        cout << "Enter a guess between 1 and 100 : "; //what does the user have to do
        cin >> guess; // user's guess

        if (guess > num) { //"if statement" if the user's guess is higher than the generated number
            cout << "Too high!\n\n"; // saying to the user that the number he has to guess is lower then the one he gave
        }
        else if (guess < num) //"else statement" if the user's guess is lower than the generated number
            {
                cout << "Too low!\n\n"; //saying to the user that the number he has to guess is higher then the one he gave
            }
        else {
            cout << "\nCorrect! You got it in "; // if "guess" is not higher or lower than "num" the number is correct
        }
    }

    return 0;
}
