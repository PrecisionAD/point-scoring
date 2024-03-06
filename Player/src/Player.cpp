#include "../headers/Player.h"

Player::Player() :
    mPoints{ 0 },
    mHuevos{ 0 },
    mFlag{ false },
    mUpdated{ false }
{}

Player::Player(std::string& nameIn) :
    mName{ std::move(nameIn) },
    mPoints{ 0 },
    mHuevos{ 0 },
    mFlag{ false },
    mUpdated{ false }
{}

void Player::setName(std::string& nameIn)
{
    mName = std::move(nameIn);
}


void Player::updatePoints(int pointsIn)
{
    mPoints += pointsIn;
}

void Player::updateHuevos(int huevosIn)
{
    mHuevos = huevosIn;
}

void Player::updateFlag(bool flagIn)
{
    mFlag = flagIn;
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

bool Player::getFlag() const
{
    return mFlag;
}

bool Player::getUpdated() const
{
    return mUpdated;
}






