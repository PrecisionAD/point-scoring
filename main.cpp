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
                theGame.adjustScore();
                break;
            case 3:
                // Print the table
                theGame.printScores();
                break;
            case 4:
                // End the game
                theGame.finalScores();
                done = true;
                break;
            default:
                std::cout << "Option not valid\n";
        }
    }

    return 0;
}
