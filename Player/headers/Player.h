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
    void updatePlayer(bool updateIn);
    void adjustPlayerPoints();

    [[nodiscard]] std::string getName() const;
    [[nodiscard]] int getPoints() const;
    [[nodiscard]] int getHuevos() const;
    [[nodiscard]] int getLastPoints() const;
    bool getUpdated() const;

private:
    std::string mName;
    int mPoints;
    int mHuevos;
    int mLastPoints;
    bool mUpdated;
};

#endif
