#include <iostream>
#include <vector>
#include "deck.h"

using namespace std;

int main() {
    int numPlayers;
    cout << "Enter the number of players (1-4): ";
    cin >> numPlayers;

    if (numPlayers < 1 || numPlayers > 4) {
        cout << "Invalid number of players!\n";
        return 1;
    }

    vector<Player> players;
    for (int i = 0; i < numPlayers; ++i) {
        string name;
        cout << "Enter the name for Player " << i + 1 << ": ";
        cin >> name;
        players.push_back(Player(name));
    }

    // Include PC as a player
    players.push_back(Player("PC"));

    Deck deck;
    deck.shuffle();

    for (int i = 0; i < 3; ++i) {
        for (Player& player : players) {
            player.addCard(deck.drawCard());
        }
    }

    for (int i = 0; i < numPlayers; ++i) {
        players[i].displayHand();
    }

    cout << "PC's cards are hidden.\n";

    return 0;
}
