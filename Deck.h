//
// Created by Perry-Bright on 5/21/2024.
//
#ifndef DECK_H
#define DECK_H

#include "Card.h"
#include <vector>
//#include <algorithm>
//#include <cstdlib>
//#include <ctime>

using namespace std;

class Deck {
public:
    Deck();

    void shuffle();
    Card drawCard();

private:
    vector<Card> cards;
    vector<Card> generateDeck();
};

class Player {
public:
    Player(string name);

    void addCard(Card card);
    void displayHand() const;

private:
    string name;
    vector<Card> hand;
};

#endif // DECK_H
