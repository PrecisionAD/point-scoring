#ifndef INPUT_H
#define INPUT_H

#include "../../Game/headers/Game.h"

class Input
{
public:
    Input();

    int askMenuOption();
    int askOption(int totalPlayersIn) const;
    int askPoints() const;
    int getTotalPlayers() const;
    int validateInput(std::string& inputIn) const;
    void askNames(Game& currentGameIn) const;

private:
    int mTotalPlayers;
};

#endif
