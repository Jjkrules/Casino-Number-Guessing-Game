#include <iostream>
#include <cstdlib>
#include <ctime>


void showBalance(int balance) {
    std::cout << "Current Balance: $" << balance << std::endl;
}

int getbet(int balance) {
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

int main() {
    std::srand(std::time(0));  // 🔥 This fixes your issue
    int balance = 100;
    char chice;
    std::cout << "Welcome to the Guessing Game!" << std::endl;
    showBalance(balance);
    int bet = getbet(balance);

   int gess = guessNumber();
  int secretNumber = std::rand() % (10 - 0 + 1) + 0;
    std::cout << "your guess: " << gess << std::endl;
    std::cout << "secret number: " << secretNumber << std::endl;

    if (gess == secretNumber) {
        std::cout << "Congratulations! You guessed the number." << std::endl;
    } else {
        std::cout << "Sorry, you didn't guess the number." << std::endl;
    }

    return 0;
}