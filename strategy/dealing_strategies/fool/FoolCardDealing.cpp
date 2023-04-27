#include "FoolCardDealing.h"

std::map<std::string, std::vector<Card>> FoolCardDealing::dealStacks(Deck deck, int players) {
    std::map<std::string, std::vector<Card>> strategy;

    for (int i = 0; i < players; ++i) {
        std::vector<Card> hand;
        strategy.emplace("Player " + std::to_string(i + 1), hand);
    }

    for (int i = 0; i < 6; ++i) {
        for (const auto &[key, _]: strategy) {
            std::vector<Card> &hand = strategy[key];
            hand.push_back(deck.dealCard());
        }
    }

    std::vector<Card> trumpCard;
    trumpCard.push_back(deck.dealCard());

    strategy.emplace("Trump card", trumpCard);
    strategy.emplace("Remaining", deck.restCards());

    return strategy;
}
