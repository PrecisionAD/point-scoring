#include "../headers/Input.h"
#include "../../Player/headers/Player.h"
#include "../../Game/headers/EscapeColors.h"

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

int Input::askOption(int totalPlayersIn) const
{
    int option{ 0 };
    bool done{ false };
    std::string input{};

    while(not done)
    {
        std::cout << "Option: ";
        std::cin >> input;
        option = validateInput(input);

        if (option > 0 and option <= totalPlayersIn)
        {
            done = true;
        }
        else
        {
            std::cout << BOLDYELLOW << "Oops! Try again!\n" << RESET;
        }
    }

    return option;
}

int Input::askPoints() const
{
    int const maxPoints{ 1000 };
    int points{ -1 };
    bool done{ false };
    std::string input{};

    while (not done)
    {
        std::cout << "How many points for the player? ";
        std::cin >> input;
        points = validateInput(input);

        if (points > -1 and points < maxPoints)
        {
            done = true;
        }
        else
        {
            std::cout << "\nPoints don't seem right...\n\n";
        }
    }

    return points;
}

int Input::getTotalPlayers() const
{
    return mTotalPlayers;
}

int Input::validateInput(std::string& inputIn) const
{
    int option{ -1 };

    try
    {
        option = std::stoi(inputIn);
    }
    catch (std::invalid_argument& error)
    {
        std::cout << BOLDYELLOW << "That's not a number!\n" << RESET;
        option = -1;
    }

    return option;
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

















