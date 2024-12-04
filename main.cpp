#include "Game/headers/Game.h"
#include "Input/headers/Input.h"
#include "Player/headers/Player.h"
#include "Files/headers/Files.h"

#include <iostream>

int main()
{
    int totalPlayers{ 0 };
    std::cout << "How many players are playing? ";
    std::cin >> totalPlayers;

    // Create the game
    Game theGame{ totalPlayers };
    const Files file{ };

    // Ask for details
    Input const input{};
    input.askNames(theGame);

    int option{ 0 };
    unsigned roundPlayed{ 0 };
    const int totalRounds{ 7 };
    bool done{ false };


    while (not done)
    {
        if (roundPlayed == totalRounds)
        {
            option = 4;
        }
        else
        {
            option = theGame.menuOption();
        }

        switch (option)
        {
            case 1:
                // Update players
                theGame.enterScores();
                roundPlayed++;
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
                // End the game and save scores
                theGame.finalScores();
                file.saveToFile(theGame, roundPlayed);
                done = true;
                break;
            case 5:
                // test printing player scores
                theGame.getAllPlayers().at(0).printPlayerScores();
                break;
            default:
                std::cout << "Option not valid\n";
        }
    }

    return 0;
}
