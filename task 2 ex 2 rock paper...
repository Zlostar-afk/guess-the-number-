#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int main()
{
    srand(time(0));
    int randNum = (rand() % 3) + 1;

    int usersChoice;
    cout << "Choose -> scissor (1), rock (2), paper (3)" << endl;
    cin >> usersChoice;

    if (randNum == 1 && usersChoice == 1)
        cout << "Computer choose scissor. You r scissor. its a draw :0!";
    if (randNum == 1 && usersChoice == 2)
        cout << "Computer choose scissor. You r rock. U win :D !";
    if (randNum == 1 && usersChoice == 3)
        cout << "Computer choose scissor. You r paper. U loose D: !";

    if (randNum == 2 && usersChoice == 2)
        cout << "Computer choose rock. You r rock. its a draw :0!";
    if (randNum == 2 && usersChoice == 3)
        cout << "Computer choose rock. You r paper. U win :D !";
    if (randNum == 2 && usersChoice == 1)
        cout << "Computer choose rock. You r scissor. U loose D: !";


    if (randNum == 3 && usersChoice == 3)
        cout << "Computer choose paper. You r paper. its a draw :0!";
    if (randNum == 3 && usersChoice == 1)
        cout << "Computer choose paper. You r scissor. U win :D !";
    if (randNum == 3 && usersChoice == 2)
        cout << "Computer choose paper. You r rock. U loose D: !";



    return 0;
}
