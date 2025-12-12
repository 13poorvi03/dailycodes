#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main() {
    // Initialize random number
    srand(time(0));

    int card = rand() % 13 + 1; // Cards from 1 to 13 (like Ace to King)
    int guess;

    cout << "🃏 Welcome to the Card Guessing Game!" << endl;
    cout << "I have picked a card between 1 (Ace) and 13 (King)." << endl;

    cout << "Try to guess which card number it is: ";
    cin >> guess;

    if (guess == card) {
        cout << "🎉 Wow! You guessed it right!" << endl;
    } else {
        cout << "❌ Wrong guess! The correct card was " << card << "." << endl;
    }

    cout << "Thanks for playing!" << endl;

    return 0;
}
