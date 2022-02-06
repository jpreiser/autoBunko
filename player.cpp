#include <iostream>
#include <cstdlib>
#include "player.h"

using namespace std;

void Player::setName(string name) {
    playerName = name;
}

string Player::getName() {
    return playerName;
}

void Player::setScore(int score) {
    playerScore = score;
}

int Player::getScore() {
    return playerScore;
}

void Player::addWin() {
    wins = wins + 1;
}
