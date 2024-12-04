#ifndef GAME_H
#define GAME_H

#include "../../Player/headers/Player.h"

#include <vector>

class Game
{
public:
    Game();
    Game(int totalPlayersIn);

    // Player related
    void addPlayer(Player& currentPlayerIn);
    void enterScores();
    void resetPlayersFlag();
    void sortPlayers();
    void adjustScore();
    int getTotalPlayers() const;

    // Game related
    void updateGame();

    // Printing details
    void printPlayerNames() const;
    void printScores();
    int menuOption();
    void finalScores();
    std::vector<Player>& getAllPlayers();

private:
    std::vector<Player> mAllPlayers;
    int mTotalPlayers;
    char table[][16];
};

#endif
