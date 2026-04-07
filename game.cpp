#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(std::time(0));  // 🔥 This fixes your issue

    int guess;
    std::cout << "Enter your guess (0-10): ";
    std::cin >> guess; 

    int secretNumber = std::rand() % (10 - 0 + 1) + 0;

    std::cout << "your guess: " << guess << std::endl;
    std::cout << "secret number: " << secretNumber << std::endl;

    if (guess == secretNumber) {
        std::cout << "Congratulations! You guessed the number." << std::endl;
    } else {
        std::cout << "Sorry, you didn't guess the number." << std::endl;
    }

    return 0;
}