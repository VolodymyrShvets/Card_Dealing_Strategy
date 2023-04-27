#pragma once

#include "CardUtility.h"

class Card {
private:
    std::pair<CardRank, CardSuit> card;

    friend std::ostream &operator<<(std::ostream &strm, const Card &c);

public:
    Card(CardRank rank, CardSuit suit);

    [[nodiscard]] CardSuit Suit() const;

    [[nodiscard]] CardRank Rank() const;
};
