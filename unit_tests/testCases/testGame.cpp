#include "../../Game/src/Game.cpp"

#include <memory>

#include <gtest/gtest.h>

class TestGame : public testing::Test
{
public:
    TestGame();

    void SetUp();
    std::shared_ptr<Game> getGameInstance();

protected:
    static const unsigned five{ 5 };

private:
    std::shared_ptr<Game> mCurrentGame;
};

TestGame::TestGame() :
    mCurrentGame{ new Game(five) }
{}

void TestGame::SetUp()
{
    Player player1{};
    Player player2{};
    Player player3{};
    Player player4{};
    Player player5{};

    std::string naty{ "naty" };
    std::string abu{ "abu" };
    std::string ale{ "ale" };
    std::string adrian{ "adrian" };
    std::string daniel{ "daniel" };

    player1.setName(naty);
    player2.setName(abu);
    player3.setName(ale);
    player4.setName(adrian);
    player5.setName(daniel);

    player1.updatePoints(50);
    player2.updatePoints(25);
    player3.updatePoints(100);
    player4.updatePoints(10);
    player5.updatePoints(75);

    getGameInstance()->addPlayer(player1);
    getGameInstance()->addPlayer(player2);
    getGameInstance()->addPlayer(player3);
    getGameInstance()->addPlayer(player4);
    getGameInstance()->addPlayer(player5);

}

std::shared_ptr<Game> TestGame::getGameInstance()
{
    return mCurrentGame;
}

TEST_F(TestGame, TotalPlayersTest)
{
    EXPECT_EQ(5, getGameInstance()->getAllPlayers().size());

    Player currentPlayer{};
    getGameInstance()->addPlayer(currentPlayer);
    EXPECT_EQ(6, getGameInstance()->getAllPlayers().size());
    EXPECT_EQ(5, getGameInstance()->getTotalPlayers());
}

TEST_F(TestGame, MenuOptiontest)
{
    EXPECT_EQ(2, getGameInstance()->menuOption());
}

TEST_F(TestGame, SortPlayersTest)
{
    EXPECT_STREQ("naty", getGameInstance()->getAllPlayers().at(0).getName().c_str());
    EXPECT_STREQ("abu", getGameInstance()->getAllPlayers().at(1).getName().c_str());
    EXPECT_STREQ("ale", getGameInstance()->getAllPlayers().at(2).getName().c_str());
    EXPECT_STREQ("adrian", getGameInstance()->getAllPlayers().at(3).getName().c_str());
    EXPECT_STREQ("daniel", getGameInstance()->getAllPlayers().at(4).getName().c_str());
}
























