#ifndef GAME_H
#define GAME_H

void showBalance(int balance);
int getBet(int balance);
int getGuess();
int generateRandomNumber(int min, int max);
void playRound(int& balance);

#endif