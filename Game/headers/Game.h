#ifndef GAME_H
#define GAME_H

#include "../../Player/headers/Player.h"

#include <vector>

// class Player;

class Game
{
public:
    Game();
    Game(int totalPlayersIn);

    // Player related
    void setMaxPlayers();
    void addPlayer(Player& currentPlayerIn);
    void enterScores();
    int getTotalPlayers() const;

    // Printing details
    void printPlayerNames() const;
    void printTable();
    int menuOption();
    std::vector<Player>& getAllPlayers();

private:
    std::vector<Player> mAllPlayers;
    int mTotalPlayers;
};

#endif
