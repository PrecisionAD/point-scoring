#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <vector>

class Player
{
public:
    Player();
    Player(std::string& nameIn);

    // Player attributes related
    void setName(std::string& nameIn);
    void updatePoints(int pointsIn);
    void updateHuevos(int huevosIn);
    void updateFlag(bool flag);

    [[nodiscard]] std::string getName() const;
    [[nodiscard]] int getPoints() const;
    [[nodiscard]] int getHuevos() const;
    bool getFlag() const;
    bool getUpdated() const;

private:
    std::string mName;
    int mPoints;
    int mHuevos;
    bool mFlag;
    bool mUpdated;
};

#endif
