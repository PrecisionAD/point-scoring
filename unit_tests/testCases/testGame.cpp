#include "../../Game/src/Game.cpp"

#include <memory>

#include <gtest/gtest.h>

class TestGame : public testing::Test
{
public:
    TestGame();

    std::shared_ptr<Game> getGameInstance();

protected:
    static const unsigned five{ 5 };

private:
    std::shared_ptr<Game> mCurrentGame;
};

TestGame::TestGame() :
    mCurrentGame{ new Game(five) }
{}

std::shared_ptr<Game> TestGame::getGameInstance()
{
    return mCurrentGame;
}

TEST_F(TestGame, TotalPlayersTest)
{
    EXPECT_EQ(0, getGameInstance()->getAllPlayers().size());

    Player currentPlayer{};
    getGameInstance()->addPlayer(currentPlayer);
    EXPECT_EQ(1, getGameInstance()->getAllPlayers().size());
    EXPECT_EQ(5, getGameInstance()->getTotalPlayers());
}

TEST_F(TestGame, MenuOptiontest)
{
    EXPECT_EQ(2, getGameInstance()->menuOption());
}

