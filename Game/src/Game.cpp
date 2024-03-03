#include "../headers/Game.h"

#include <iostream>

Game::Game(int totalPlayersIn) :
    mTotalPlayers{ totalPlayersIn }
{
    mAllPlayers.reserve(totalPlayersIn);
}

void Game::addPlayer(Player& currentPlayerIn)
{
    mAllPlayers.push_back(currentPlayerIn);
}

void Game::enterScores()
{
    
}

int Game::getTotalPlayers() const
{
    return mTotalPlayers;
}

int Game::menuOption()
{
    std::cout << "**************************\n";
    std::cout << "*        MAIN MENU       *\n";
    std::cout << "**************************\n";

    std::cout << "What would you like to do?" << "\n";
    std::cout << "1) Play a round" << "\n";
    std::cout << "2) Adjust a score" << "\n";
    std::cout << "3) Print the table" << "\n";
    std::cout << "4) End the game" << "\n";

    bool done{ false };
    int option{ 0 };

    while (not done)
    {
        std::cin >> option;
        if (option < 1 or option > 4)
        {
           std::cout << "Opps! That's not valid! Try again?" << "\n";
        }
        else
        {
            done = true;
        }
    }

    return option;
}

std::vector<Player> Game::getAllPlayers()
{
    return mAllPlayers;
}
