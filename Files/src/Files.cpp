#include "../headers/Files.h"

#include <iostream>

bool Files::saveToFile(Game& theGame, unsigned totalRounds) const
{
    const std::string file{ "scoresToParse.txt" };
    std::ofstream stream{};

    stream.open(file , std::ofstream::app | std::ofstream::out);
    const std::ios_base::iostate state{ stream.rdstate() };

    if (std::ios_base::failbit == state)
    {
        std::cout << "Error opening the file " << file << "\n";
        return false;
    }

    std::vector<Player> players{ theGame.getAllPlayers() };
    stream << "\n\n\n";

    for (auto& currentPlayer : players)
    {
        stream << currentPlayer.getName() << " ";
        for (unsigned index = 0; index < totalRounds; index++)
        {
            stream << currentPlayer.getRoundPoints().at(index) << " ";
        }

        stream << currentPlayer.getPoints() << " ";
        stream << currentPlayer.getHuevos() << " ";
        stream << "1";
        stream << "\n";
    }

    stream.close();

    return true;
}
