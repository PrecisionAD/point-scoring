#ifndef INPUT_H
#define INPUT_H

#include "../../Game/headers/Game.h"

class Input
{
public:
    Input();

    int askMenuOption();
    int getTotalPlayers() const;
    void askNames(Game& currentGameIn) const;

private:
    int mTotalPlayers;
};

#endif
