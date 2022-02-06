#include <iostream>
#include <cstdlib>
#include <string>
#include <cstring>
#include <limits>
#include <iterator>
#include "player.h"

using namespace std;


void createPlayers (int numPlayers, Player players[]) {

    int i = 0;
    string playerName = " ";

    while(i < numPlayers) {
        cout << "Who is playing?" << endl;
        cin >> playerName;
        players[i].setName(playerName);
        players[i].setScore(0);
        i = i + 1;
    }
} // createPlayers


void playBunko() {

    Player * players = new Player[4];
    int numPlayers = 0;

    while (numPlayers != 2 || numPlayers != 4) {
        cout << "How many players? (2/4)" << endl;
        cin >> numPlayers;
        if (numPlayers == 2 || numPlayers == 4) {
            createPlayers(numPlayers, players);
        } else {
            cout << "Please enter either 2 or 4 players." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }


    cout << "Round " << endl;

} // playBunko


int main() {

    char play = 'y';

    cout << "Welcome to Bunko!" << endl;
    while (1) {
        cout << "Would you like to play a match? (y/n)" << endl;
        cin >> play;
        switch(play) {
        case 'y':
            playBunko();
            break;
        case 'n':
            cout << "Thanks for playing!" << endl;
            return 0;
            break;
        default:
            cout << "Please select y or n to play or quit." << endl;
        }

    }

    return 0;

}
