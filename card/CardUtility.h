#pragma once

#include <string>

enum class CardSuit {
    HEARTS,
    DIAMONDS,
    CLUBS,
    SPADES,
    LAST
};

enum class CardRank {
    TWO = 2,
    THREE = 3,
    FOUR = 4,
    FIVE = 5,
    SIX = 6,
    SEVEN = 7,
    EIGHT = 8,
    NINE = 9,
    TEN = 10,
    JACK = 11,
    QUEEN = 12,
    KING = 13,
    ACE = 14,
    LAST
};

inline static std::string getSuitString(CardSuit suit) {
    switch (suit) {
        case CardSuit::HEARTS:
            return "HEARTS";
        case CardSuit::DIAMONDS:
            return "DIAMONDS";
        case CardSuit::CLUBS:
            return "CLUBS";
        case CardSuit::SPADES:
            return "SPADES";
    }
}

inline static std::string getRankString(CardRank rank) {
    switch (rank) {
        case CardRank::TWO:
            return "2";
        case CardRank::THREE:
            return "3";
        case CardRank::FOUR:
            return "4";
        case CardRank::FIVE:
            return "5";
        case CardRank::SIX:
            return "6";
        case CardRank::SEVEN:
            return "7";
        case CardRank::EIGHT:
            return "8";
        case CardRank::NINE:
            return "9";
        case CardRank::TEN:
            return "10";
        case CardRank::JACK:
            return "Jack";
        case CardRank::QUEEN:
            return "Queen";
        case CardRank::KING:
            return "King";
        case CardRank::ACE:
            return "Ace";
    }
}
