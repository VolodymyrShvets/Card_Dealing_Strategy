#include <iostream>
#include "card/Card.h"
#include "deck/Deck.h"
#include "deck/DeckUtility.h"
#include "strategy/Strategy.h"
#include "strategy/CardDealingStrategies.h"

int main() {
    std::cout << "Hello, World!" << std::endl;

    Strategy *strategy;

    strategy = CardDealingStrategies::foolCardDealingStrategy();
    //strategy = CardDealingStrategies::bridgeCardDealingStrategy();
    //strategy = CardDealingStrategies::classicPokerCardDealingStrategy();
    //strategy = CardDealingStrategies::texasHoldemCardDealingStrategy();

    Deck deck(classicDeck());
    //Deck deck(extendedDeck());
    deck.shuffle();

    std::map<std::string, std::vector<Card>> game = strategy->dealStacks(deck, 4);

    for (const auto &[key, _]: game) {
        std::vector<Card> hand = game[key];
        std::cout << std::endl << "Key: " << key << ", Value: " << std::endl;
        for (auto card: hand) {
            std::cout << card << std::endl;
        }
    }

    return 0;
}
