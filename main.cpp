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
    int roundPlayed{ 0 };
    bool done{ false };

    while (not done)
    {
        option = theGame.menuOption();
        switch (option)
        {
            case 1:
                // Update players
                theGame.enterScores();
                roundPlayed++;
                // save scores?
                break;
            case 2:
                // Adjust score
                break;
            case 3:
                // Print the table
                theGame.printScores();
                break;
            case 4:
                // End the game
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
