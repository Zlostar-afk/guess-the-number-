#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    cout << "Guess My Number Game\n\n";
    int firstNum;
    int secondNum;
    cout << "enter 2 numbers and the program will generate a number between them " << endl;
    cin >> firstNum;
    cin >> secondNum;
    srand(time(0)); //seed random number generator
    int num = rand() % (secondNum - firstNum + 1) + firstNum ; // random number //(Includes firstNum and secondNum)

    int sum = 0 ;

    int guess = 0;
    while (guess != num) {
        cout << "Enter a guess between them: ";
        cin >> guess;

        if  (guess == 0) {
            return 0;
        }
        if (guess > num) {
            cout << "Too high!\n\n";
            sum = sum + 1;
        }
        else if (guess < num)
            {
                cout << "Too low!\n\n";
                sum = sum + 1;
            }
        else {
                sum = sum + 1;
            cout << "\nCorrect! You got it in ";
            cout << "You tried " << sum << " times" ;
        }
    }

    return 0;
}
