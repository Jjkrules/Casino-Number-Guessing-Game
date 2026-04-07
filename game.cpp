#include <iostream>
#include <cstdlib>
#include <ctime>
#include "game.h"

void showBalance(int balance) {
    std::cout << "Current Balance: $" << balance << std::endl;
}

int getBet(int balance) {
    int bet;
    std::cout << "Enter your bet amount: ";
    std::cin >> bet;
    while (bet <= 0 || bet > balance) {
        std::cout << "Invalid bet amount. Please enter a new bet: ";
        std::cin >> bet;
    }

    return bet;
}

int guessNumber() {
     int guess;
    std::cout << "Enter your guess (0-10): ";
    std::cin >> guess; 
    while (guess < 0 || guess > 10) {
        std::cout << "Invalid guess. Please enter a number between 0 and 10: ";
        std::cin >> guess;
    }
    return guess;
}

void playGame(int& balance) {
    int guess = guessNumber();
    int bet = getBet(balance);
    int secretNumber = std::rand() % (10 - 0 + 1) + 0;

  
    std::cout << "Your guess: " << guess << std::endl;
    std::cout << "Secret number: " << secretNumber << std::endl;

    if (guess == secretNumber) {
        std::cout << "Congratulations! You guessed the number." << std::endl;
        balance += bet; // Player wins the bet amount
    } else {
        std::cout << "Sorry, you didn't guess the number." << std::endl;
        balance -= bet; // Player loses the bet amount
    }

    showBalance(balance);
}

int main() {

    std::srand(std::time(0));  
     int balance = 100;
    char chice;
    std::cout << "Welcome to the Casino Number Guessing Game!" << std::endl;
    while( balance > 0) {
        playGame(balance);
        std::cout << "Do you want to play again? (y/n): ";
        std::cin >> chice;
        if (chice != 'y' && chice != 'Y') {
            break;
        }
    }
 
    std::cout << "Game over. Final balance: $" << balance << std::endl;

    return 0;
}