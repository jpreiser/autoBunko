#ifndef PLAYER_H
#define Player_H

#include <iostream>
#include <cstdlib>

using namespace std;

class Player {
public:
    void setName(string name);

    string getName();

    void setScore(int score);

    int getScore();
    
    void addWin();

private:
    string playerName;

    int playerScore;

    int wins;
};

#endif
