#pragma once

#include "Strategy.h"
#include "dealing_strategies/fool/FoolCardDealing.h"
#include "dealing_strategies/classic_poker/ClassicPokerCardDealing.h"
#include "dealing_strategies/texasHoldem/TexasHoldemCardDealing.h"
#include "dealing_strategies/bridge/BridgeCardDealing.h"

class CardDealingStrategies {
public:
    static Strategy *foolCardDealingStrategy() {
        return new FoolCardDealing();
    }

    static Strategy *bridgeCardDealingStrategy() {
        return new BridgeCardDealing();
    }

    static Strategy *classicPokerCardDealingStrategy() {
        return new ClassicPokerCardDealing();
    }

    static Strategy *texasHoldemCardDealingStrategy() {
        return new TexasHoldemCardDealing();
    }
};
