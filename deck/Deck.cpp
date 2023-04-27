#include <algorithm>
#include <random>
#include <iostream>
#include <utility>

#include "Deck.h"

Deck::Deck(std::vector<Card> d) {
    copyDeck(std::move(d));
}

void Deck::copyDeck(std::vector<Card> d) {
    deck.insert(deck.end(), d.begin(), d.end());
}

void Deck::shuffle() {
    auto rd = std::random_device{};
    auto rng = std::default_random_engine{rd()};
    std::shuffle(std::begin(deck), std::end(deck), rng);
}

Card Deck::dealCard() {
    Card top = deck.back();
    deck.pop_back();
    return top;
}

std::vector<Card> Deck::restCards() {
    return deck;
}

int Deck::size() {
    return deck.size();
}
