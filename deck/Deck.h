#pragma once

#include <vector>
#include "../card/Card.h"

class Deck {
private:
    std::vector<Card> deck;

    void copyDeck(std::vector<Card> d);

public:
    explicit Deck(std::vector<Card> d);

    Card dealCard();

    std::vector<Card> restCards();

    int size();

    void shuffle();
};
