#include "../headers/Input.h"
#include "../../Player/headers/Player.h"

#include <iostream>

Input::Input() :
    mTotalPlayers{ 0 }
{}

int Input::askMenuOption()
{
    const int FIVE{ 5 };
    int option{ 0 };
    bool done{ false };

    while (not done)
    {
        std::cout << "Enter a menu option: ";
        std::cin >> option;

        if (option > 0 && option < FIVE)
        {
            done = true;
        }
        else
        {
            std::cout << "Oops! You sure about that option?\n";
        }
    }

    return option;
}

int Input::getTotalPlayers() const
{
    return mTotalPlayers;
}

void Input::askNames(Game& currentGameIn) const
{
    int index{ 1 };
    int totalPlayers{ currentGameIn.getTotalPlayers() };
    std::string name{};

    std::cout << "totalPlayers " << totalPlayers << "\n";
    while (totalPlayers > 0)
    {
        Player currentPlayer{};

        std::cout << "Name for player #" << index++ << " ";
        std::cin >> name;
        currentPlayer.setName(name);
        currentGameIn.addPlayer(currentPlayer);
        totalPlayers--;
        name.clear();
    }
}






















