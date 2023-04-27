#include <iostream>
#include "Card.h"

Card::Card(CardRank rank, CardSuit suit) {
    card = std::make_pair(rank, suit);
}

CardSuit Card::Suit() const {
    return card.second;
}

CardRank Card::Rank() const {
    return card.first;
}

std::ostream &operator<<(std::ostream &strm, const Card &card) {
    strm << "Card: " << getRankString(card.Rank()) << " of " << getSuitString(card.Suit());
    return strm;
}
