#include "ClassicPokerCardDealing.h"

std::map<std::string, std::vector<Card>> ClassicPokerCardDealing::dealStacks(Deck deck, int players) {
    std::map<std::string, std::vector<Card>> strategy;

    for (int i = 0; i < players; ++i) {
        std::vector<Card> hand;
        strategy.emplace("Player " + std::to_string(i + 1), hand);
    }

    for (int i = 0; i < 5; ++i) {
        for (const auto &[key, _]: strategy) {
            std::vector<Card> &hand = strategy[key];
            hand.push_back(deck.dealCard());
        }
    }

    strategy.emplace("Remaining", deck.restCards());

    return strategy;
}
