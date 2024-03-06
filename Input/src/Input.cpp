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

int Input::askOption() const
{
    int option{ 0 };
    bool done{ false };

    while(not done)
    {
        std::cout << "Option: ";
        std::cin >> option;

        if (option > 0 and option < mTotalPlayers)
        {
            done = true;
        }
        else
        {
            std::cout << "Oops! Try again!" << "\n";
        }
    }

    return option;
}

int Input::askPoints() const
{
    int const maxPoints{ 1000 };
    int points{ -1 };
    bool done{ false };

    while (not done)
    {
        std::cout << "How many points for the player? ";
        std::cin >> points;

        if (points > -1 and points < maxPoints)
        {
            return points;
        }
        else
        {
            std::cout << "Points don't seem right..." << "\n";
        }
    }

    return points;
}


void Input::askNames(Game& currentGameIn) const
{
    int index{ 1 };
    int totalPlayers{ currentGameIn.getTotalPlayers() };
    std::string name{};

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


















