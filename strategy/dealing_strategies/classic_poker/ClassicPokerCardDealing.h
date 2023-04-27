#pragma once

#include "../../Strategy.h"

class ClassicPokerCardDealing : public Strategy {
public:
    std::map<std::string, std::vector<Card>> dealStacks(Deck deck, int players) override;
};
