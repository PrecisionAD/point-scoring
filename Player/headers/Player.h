#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <vector>

class Player
{
public:
    Player();

    void setName(std::string& nameIn);
    std::string getName() const;
    void setPoints(int pointsIn);
    int getPoints() const;
    void setHuevos(int huevosIn);
    int getHuevos() const;
    void setFlag(bool flag);
    bool getFlag() const;

private:
    std::string mName;
    int mPoints;
    int mHuevos;
    bool mFlag;
};

#endif
