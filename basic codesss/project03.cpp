#include <iostream>
using namespace std;

int main() {
    int player = 0;
    int dice;
    char choice;

    cout << " Welcome to Snake and Ladder Game " << endl;
    cout << "Reach 100 to win the game!" << endl;
    cout << "Snakes: 99→54, 70→55, 52→42, 25→2" << endl;
    cout << "Ladders: 6→25, 11→40, 60→85, 46→90\n" << endl;

    while (player < 100) {
        cout << "\nYour current position: " << player << endl;
        cout << "Press 'r' to roll the dice: ";
        cin >> choice;

        if (choice == 'r' || choice == 'R') {
            cout << "Enter dice number (1 to 6): ";
            cin >> dice;

            if (dice < 1 || dice > 6) {
                cout << "❌ Invalid dice number! Enter between 1 and 6." << endl;
                continue;
            }

            player += dice;

            if (player > 100) {
                player -= dice;  // need exact number to reach 100
                cout << "You need exact number to reach 100!" << endl;
            }

            //  Ladders
            if (player == 6) player = 25;
            else if (player == 11) player = 40;
            else if (player == 60) player = 85;
            else if (player == 46) player = 90;

            //  Snakes
            else if (player == 99) player = 54;
            else if (player == 70) player = 55;
            else if (player == 52) player = 42;
            else if (player == 25) player = 2;

            cout << "You are now on position: " << player << endl;
        } else {
            cout << "❌ Invalid input! Press 'r' to roll." << endl;
        }
    }

    cout << "\n🎉 Congratulations! You reached 100 and won the game! 🎉" << endl;
    return 0;
}
