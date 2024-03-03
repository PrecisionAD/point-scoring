#include "../headers/Player.h"

Player::Player() :
    mPoints{ 0 },
    mHuevos{ 0 },
    mFlag{ false }
{}


void Player::setName(std::string& nameIn)
{
    mName = std::move(nameIn);
}

std::string Player::getName() const
{
    return mName;
}

void Player::setPoints(int pointsIn)
{
    mPoints += pointsIn;
}

int Player::getPoints() const
{
    return mPoints;
}

void Player::setHuevos(int huevosIn)
{
    mHuevos = huevosIn;
}

int Player::getHuevos() const
{
    return mHuevos;
}

void Player::setFlag(bool flagIn)
{
    mFlag = flagIn;
}

bool Player::getFlag() const
{
    return mFlag;
}







