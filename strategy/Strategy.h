#pragma once

#include <map>
#include <string>
#include <vector>
#include "../card/Card.h"
#include "../deck/Deck.h"

class Strategy {
public:
    virtual std::map<std::string, std::vector<Card>> dealStacks(Deck deck, int players) = 0;
};
