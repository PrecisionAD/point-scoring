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
    mRoundPoints.push_back(pointsIn);
}

void Player::updateHuevos(int huevosIn)
{
    mHuevos += huevosIn;
}

void Player::updatePlayer(bool updateIn)
{
    mUpdated = updateIn;
}

void Player::adjustPlayerPoints()
{
    mPoints -= mLastPoints;
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

int Player::getLastPoints() const
{
    return mLastPoints;
}

std::vector<unsigned>& Player::getRoundPoints()
{
    return mRoundPoints;
}






