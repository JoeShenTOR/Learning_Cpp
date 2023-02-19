#include <iostream>
#include <string>

const int MAX_GUESSES = 5; // Maximum number of guesses allowed

int main() {
    std::string word = "secret"; // The word to be guessed
    std::string guess; // The player's current guess
    int numGuesses = 0; // The number of guesses made so far

    // Print instructions for the game
    std::cout << "Welcome to Wordle! Can you guess the secret word?" << std::endl;
    std::cout << "You have " << MAX_GUESSES << " guesses to figure it out." << std::endl;

    // Loop until the player has made their maximum number of guesses or has guessed the word correctly
    while (numGuesses < MAX_GUESSES && guess != word) {
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        numGuesses++;

        // Check if the guess is correct and print a message
        if (guess == word) {
            std::cout << "Congratulations! You guessed the secret word!" << std::endl;
        }
        else {
            std::cout << "Sorry, that's not the secret word. Try again." << std::endl;
        }
    }

    // If the player didn't guess the word, print a message
    if (guess != word) {
        std::cout << "Sorry, you didn't guess the secret word. Better luck next time!" << std::endl;
    }

    return 0;
}