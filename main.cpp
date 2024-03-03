#include "Game/headers/Game.h"
#include "Input/headers/Input.h"
#include "Player/headers/Player.h"

#include <iostream>

int main()
{
    int totalPlayers{ 0 };
    std::cout << "How many players are playing? ";
    std::cin >> totalPlayers;

    // Create the game
    Game theGame{ totalPlayers };

    // Ask for details
    Input const input{};
    input.askNames(theGame);

    int option{ 0 };
    bool done{ false };

    while (not done)
    {
        option = theGame.menuOption();
        switch (option)
        {
            case 1:
                // enter scores
                // save scores?
                // print table
                // print score difference
                // +1 round played
                break;
            case 2:
                // adjust score
                break;
            case 3:
                // print the table
                break;
            case 4:
                // end the game
                done = true;
                break;
            default:
                std::cout << "???" << "\n";
                // ???
        }
    }





    // std::vector<Player> players{ theGame.getAllPlayers() };
    // int i{ 0 };
    // for (Player p : players)
    // {
    //     std::cout << "player: " << p.getName() << "\n";
    //     i++;
    // }

    return 0;
}
