#include <iostream>
#include <cstdlib>  // for rand() and srand()
#include <ctime>    // for time()

using namespace std;

int main() {
    int number, guess, tries = 0;

    // Seed random number generator
    srand(time(0));
    number = rand() % 100 + 1; // Random number between 1 and 100

    cout << "🎯 Welcome to the Number Guessing Game!" << endl;
    cout << "I'm thinking of a number between 1 and 100." << endl;

    // Game loop
    do {
        cout << "Enter your guess: ";
        cin >> guess;
        tries++;

        if (guess > number)
            cout << "Too high! Try again." << endl;
        else if (guess < number)
            cout << "Too low! Try again." << endl;
        else
            cout << "🎉 Correct! You guessed it in " << tries << " tries!" << endl;

    } while (guess != number);

    return 0;
}
