//
// Created by Perry-Bright on 5/21/2024.
//

#ifndef CARD_H
#define CARD_H

#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

class Card {
public:
    Card(int number, string suit);

    int getNumber() const;
    string getSuit() const;
    char getCardName() const;
    string getSuitSymbol() const;

    void display() const;

private:
    int number;
    string suit;
    char cardName;
    string suitSymbol;

    void determineCardName();
    void determineSuitSymbol();
};

#endif // CARD_H
