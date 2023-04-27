#pragma once

#include <vector>
#include "../card/Card.h"

std::vector<Card> classicDeck() {
    std::vector<Card> deck;

    for (int i = (int) CardSuit::HEARTS; i != (int) CardSuit::LAST; ++i) {
        for (int j = (int) CardRank::SIX; j != (int) CardRank::LAST; ++j) {
            Card card(static_cast<CardRank>(j), static_cast<CardSuit>(i));
            deck.emplace_back(card);
        }
    }
    return deck;
}

std::vector<Card> extendedDeck() {
    std::vector<Card> deck;

    for (int i = (int) CardSuit::HEARTS; i != (int) CardSuit::LAST; ++i) {
        for (int j = (int) CardRank::TWO; j != (int) CardRank::LAST; ++j) {
            Card card(static_cast<CardRank>(j), static_cast<CardSuit>(i));
            deck.emplace_back(card);
        }
    }
    return deck;
}
