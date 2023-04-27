#pragma once

#include "../../Strategy.h"

class BridgeCardDealing : public Strategy {
public:
    std::map<std::string, std::vector<Card>> dealStacks(Deck deck, int players) override;
};
