# Casino-Number-Guessing-Game
🎰 Casino Number Guessing Game (C++)

A simple command-line casino-style number guessing game built in C++. The player bets money on guessing a randomly generated number correctly.

📌 Overview

This project is designed to practice core C++ concepts such as:

Functions and modular design
Header files (.h) and implementation files (.cpp)
Loops and control flow
Random number generation
User input validation

The game simulates a casino experience where the player starts with a balance and continues playing until they quit or run out of money.

/casino-number-game
  ├── game.cpp    // Main logic and game implementation
  ├── game.h      // Function declarations
  └── README.md   // Project documentation


⚙️ Features
    - 🎲 Random number generation using rand()
    - 🔁 Game loop using while
    - 💰 Betting system with balance tracking
    - 🧠 Input validation for bets and guesses
    - 📦 Modular design using header and source files

🛠️ Technologies Used
    - Language: C++
    - Libraries:
        - <iostream>
        - <cstdlib>
        - <ctime>

🚀 How to Run
1. Compile the program:
    g++ game.cpp -o game
2. Run the game:
    ./game

🎮 How to Play
1. You start with an initial balance (e.g., $100).
2. Enter a bet amount.
3. Guess a number between 1 and 10.
4. The computer generates a random number.
5. If your guess is correct:
    You win and gain your bet amount.
6. If your guess is incorrect:
    You lose your bet.
7. Continue playing or exit the game.