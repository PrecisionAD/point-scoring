#ifndef GAME_H
#define GAME_H

#include "../../Player/headers/Player.h"

#include <vector>

class Player;

class Game
{
public:
    Game() = default;
    Game(int totalPlayersIn);

    void setMaxPlayers();
    void addPlayer(Player& currentPlayerIn);
    void enterScores();
    int getTotalPlayers() const;
    int menuOption();
    std::vector<Player> getAllPlayers();

private:
    std::vector<Player> mAllPlayers;
    int mTotalPlayers;
};

#endif
