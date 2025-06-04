#include <iostream>
#include <string>
using namespace std;

int main() {
    int ships[3][3] = {
        {0,1,0},
        {1,0,1},
        {0,1,0},
    };

    cout << "You have unlimited turns and mission is to find all the ships. \nGood luck!";

    int hits = 0;
    int row;
    int column;
    int numberOfTurns;
    int numberOfShips = 4;
    int minus = 1;

    while (hits < 4) {
        cout << "\nChoose the row from 1 to 3 : ";
        cin >> row;
        cout << "Choose the column from 1 to 3 : ";
        cin >> column;

        if ((row > 0 && row < 4) && (column > 0 && column < 4)) {
            if (ships[row-1][column-1] == 1) {
                hits += 1;
                numberOfTurns += 1;
                numberOfShips -= 1;
                cout << "\nHit!" << "\nThe number of remaining ships " << numberOfShips << ". \n";
                ships[row-1][column-1] = 0;
        }

            else {
                numberOfTurns += 1;
                cout << "Miss!";
            }
        }
        else {
            cout << "\nPlease enter numbers from 1 to 3.\n";
        }
    }

    cout << "\nCongrats! You won! \nYou have done it in " << numberOfTurns << " turns.\n";
    return 0;
}