#include "../headers/Player.h"

Player::Player() :
    mPoints{ 0 },
    mHuevos{ 0 },
    mLastPoints{ 0 },
    mUpdated{ false }
{}

Player::Player(std::string& nameIn) :
    mName{ std::move(nameIn) },
    mPoints{ 0 },
    mHuevos{ 0 },
    mLastPoints{ 0 },
    mUpdated{ false }
{}

void Player::setName(std::string& nameIn)
{
    mName = std::move(nameIn);
}

void Player::updatePoints(int pointsIn)
{
    mPoints += pointsIn;
    mLastPoints = pointsIn;
}

void Player::updateHuevos(int huevosIn)
{
    mHuevos = huevosIn;
}

void Player::updatePlayer(bool updateIn)
{
    mUpdated = updateIn;
}

std::string Player::getName() const
{
    return mName;
}

int Player::getPoints() const
{
    return mPoints;
}

int Player::getHuevos() const
{
    return mHuevos;
}

bool Player::getUpdated() const
{
    return mUpdated;
}






