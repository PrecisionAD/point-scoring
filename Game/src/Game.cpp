#include "../headers/Game.h"
#include "../../Input/headers/Input.h"
#include "../headers/EscapeColors.h"

#include <iostream>
#include <algorithm>
#include <iomanip> // std::setw

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

    do
    {
        std::cout << "\nSelect a player to update\n";
        printPlayerNames();

        option = input.askOption(getTotalPlayers());
        addPoints = input.askPoints();
        if (not getAllPlayers().at(option - 1).getUpdated())
        {
            getAllPlayers().at(option - 1).updatePoints(addPoints);
            getAllPlayers().at(option - 1).updatePlayer(true);
            counter++;
            if (addPoints == 0)
            {
                getAllPlayers().at(option - 1).updateHuevos(1);
            }
        }
        else
        {
            std::cout << BOLDYELLOW << "\nThat Player was already updated!\n" << RESET;
        }

    } while(counter != getTotalPlayers());

    updateGame();
}

int Game::getTotalPlayers() const
{
    return mTotalPlayers;
}

void Game::resetPlayersFlag()
{
    for (Player& currentPlayer : getAllPlayers())
    {
        currentPlayer.updatePlayer(false);
    }
}

void Game::sortPlayers()
{
    // Sort players by points
    std::sort(
            getAllPlayers().begin(),
            getAllPlayers().end(),
            [&](const Player& player1, const Player& player2)
            {
                return player1.getPoints() < player2.getPoints();
            });
}

void Game::updateGame()
{
    sortPlayers();
    printScores();
    resetPlayersFlag();
}

void Game::printPlayerNames() const
{
    unsigned index{ 1 };
    for (Player const& currentPlayer : mAllPlayers)
    {
        if (currentPlayer.getUpdated())
        {
            std::cout << index++ << ") " << currentPlayer.getName() << BOLDGREEN <<" ✓\n" << RESET;
        }
        else
        {
            std::cout << index++ << ") " << currentPlayer.getName() << "\n";
        }
    }
}

void Game::printScores()
{
    int index{ 1 };
    const int width{ 6 };
    const int huevosWidth{ 12 };
    const int bestPlayer{ getAllPlayers().at(0).getPoints() };

    std::cout << "\n**************************\n";
    std::cout << "*         SCORES         *\n";
    std::cout << "**************************\n";
    for (Player const& currentPlayer : getAllPlayers())
    {
        std::cout
            << index++
            << ") "
            << std::left
            << std::setw(width)
            << currentPlayer.getName()
            << std::setw(width)
            << std::right
            <<" +"
            << currentPlayer.getPoints() - bestPlayer
            << " pts"
            << std::right
            << std::setw(huevosWidth)
            << " Huevos: "
            << currentPlayer.getHuevos()
            << "\n";

    }
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

    int option{ 0 };
    bool done{ false };
    std::string input{};
    Input const theInput{};

    while (not done)
    {
        std::cout << "Option: ";
        std::cin >> input;
        option = theInput.validateInput(input);

        if (option < 1 or option > 4)
        {
            std::cout << BOLDYELLOW << "Opps! That's not valid! Try again?\n" << RESET;
        }
        else
        {
            done = true;
            std::cout << "\n";
        }
    }

    return option;
}

std::vector<Player>& Game::getAllPlayers()
{
    return mAllPlayers;
}
