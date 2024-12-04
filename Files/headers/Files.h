#include "../../Game/headers/Game.h"

#include <fstream>

class Files
{
public:
    bool saveToFile(Game& theGame, unsigned totalRounds) const;
};
