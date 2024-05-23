//
// Created by Perry-Bright on 5/21/2024.
//

#include "deck.h"
#include "card.h"
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>

using namespace std;

Deck::Deck() {
    cards = generateDeck();
}

void Deck::shuffle() {
    srand(time(0));
    random_shuffle(cards.begin(), cards.end());
}

Card Deck::drawCard() {
    Card card = cards.back();
    cards.pop_back();
    return card;
}

vector<Card> Deck::generateDeck() {
    vector<Card> deck;
    string types[] = {"heart", "spade", "club", "diamond"};
    for (const auto& type : types) {
        for (int number = 1; number <= 13; ++number) {
            deck.push_back(Card(number, type));
        }
    }
    return deck;
}

Player::Player(string name) : name(name) {}

void Player::addCard(Card card) {
    hand.push_back(card);
}

void Player::displayHand() const {
    cout << name << "'s cards:\n";
    for (const Card& card : hand) {
        card.display();
    }
    cout << endl;
}

