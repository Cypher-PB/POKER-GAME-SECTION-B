//
// Created by Perry-Bright on 5/21/2024.
//

#include "card.h"

Card::Card(int number, string suit) {
    this->number = number;
    this->suit = suit;
    determineCardName();
    determineSuitSymbol();
}

int Card::getNumber() const {
    return number;
}
string Card::getSuit() const {
    return suit;
}
char Card::getCardName() const {
    return cardName;
}
string Card::getSuitSymbol() const {
    return suitSymbol;
}

void Card::display() const {
    cout << " ___________________\n";
    cout << "|  " << suitSymbol << "_______________|\n";
    cout << "| |              | |\n";
    cout << "| |              | |\n";
    cout << "| |              | |\n";
    cout << "| |       " << cardName << "      | |\n";
    cout << "| |              | |\n";
    cout << "| |              | |\n";
    cout << "| |              | |\n";
    cout << "| |______________| |\n";
    cout << "|__________________|\n";
}

void Card::determineCardName() {
    static unordered_map<int, char> cardassign = {{1, 'A'}, {11, 'J'}, {12, 'Q'}, {13, 'K'}};
    if (cardassign.find(number) != cardassign.end()) {
        cardName = cardassign[number];
    } else {
        cardName = '0' + number;
    }
}

void Card::determineSuitSymbol() {
    if (suit == "heart") {
        suitSymbol = "\x03";
    } else if (suit == "spade") {
        suitSymbol = "\x06";
    } else if (suit == "club") {
        suitSymbol = "\x05";
    } else if (suit == "diamond") {
        suitSymbol = "\x04";
    }
}

