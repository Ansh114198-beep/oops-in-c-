#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    int secretNumber = rand() % 100 + 1;
    int guess, attempts = 7; // limited attempts

    cout << "?? Number Guessing Game\n";
    cout << "Guess a number between 1 and 100\n";
    cout << "You have " << attempts << " attempts.\n\n";

    while (attempts > 0) {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess == secretNumber) {
            cout << "? Correct! You won!\n";
            return 0;
        } else if (guess > secretNumber) {
            cout << "?? Too high!\n";
        } else {
            cout << "?? Too low!\n";
        }

        attempts--;
        cout << "Attempts left: " << attempts << "\n\n";
    }

    cout << "? Game Over! The number was: " << secretNumber << "\n";

    return 0;
}