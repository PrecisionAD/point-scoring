#include "../headers/Game.h"
#include "../../Input/headers/Input.h"

#include <iostream>
#include <algorithm>

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
    Input const input{};
    int counter{ 0 };
    int option{ 0 };
    int addPoints{ 0 };

    std::cout << "Who won the round?\n";
    option = input.askOption(); // Serves as index too?
    getAllPlayers().at(option).updateHuevos(1); // option - 1?

    do
    {
        std::cout << "Select a player to update\n";
        printPlayerNames();

        option = input.askOption();
        addPoints = input.askPoints();
        if (not getAllPlayers().at(option).getUpdated()) // option - 1?
        {
            getAllPlayers().at(option).updatePoints(addPoints); // option - 1?
            counter++;
        }

    } while(counter != getTotalPlayers());
}

int Game::getTotalPlayers() const
{
    return mTotalPlayers;
}

void Game::printPlayerNames() const
{
    unsigned index{ 1 };
    for (Player const& currentPlayer : mAllPlayers)
    {
        std::cout << index++ << ") " << currentPlayer.getName() << "\n";
    }
}

void Game::printTable()
{
    // sort players by points
    std::sort(getAllPlayers().begin(), getAllPlayers().end(),
            [&](const Player& player1, const Player& player2)
            {
                // std::cout << "------------" << "\n";
                // return player1.getPoints() < player2.getPoints() ? player1.getPoints() : player2.getPoints();
                return player1.getPoints() < player2.getPoints();
            });
    printPlayerNames();
    // print cell with headers
    // fprintf(fp2, "%s", "\n\n┌--------┐\n");
    // fprintf(fp2, "%s", "| TABLE  | \n");
    // fprintf(fp2, "%s", "├--------┼--------┬--------┬--------┬--------┬--------┐\n");

    // print scores


    // print difference in points?


    // print huevos and stars?
}

int Game::menuOption()
{
    std::cout << "\n**************************\n";
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
        std::cout << "Option: ";
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

std::vector<Player>& Game::getAllPlayers()
{
    return mAllPlayers;
}
