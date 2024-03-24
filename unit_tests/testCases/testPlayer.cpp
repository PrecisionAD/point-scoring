#include "../../Player/src/Player.cpp"

#include <gtest/gtest.h>

#include <memory>

class TestPlayer : public testing::Test
{
public:
    TestPlayer();
    std::shared_ptr<Player> getPlayer();

private:
    std::shared_ptr<Player> mCurrentPlayer;
};

TestPlayer::TestPlayer() :
    mCurrentPlayer{ new Player }
{}

std::shared_ptr<Player> TestPlayer::getPlayer()
{
    return mCurrentPlayer;
}

TEST_F(TestPlayer, ConstructPlayerTest)
{
    // Check default values for player
    ASSERT_EQ(0, getPlayer()->getPoints());
    ASSERT_EQ(0, getPlayer()->getHuevos());
    EXPECT_FALSE(getPlayer()->getUpdated());

    std::string john{ "john" };
    getPlayer()->setName(john);
    EXPECT_STREQ("john", getPlayer()->getName().c_str());

    unsigned const points{ 10 };
    getPlayer()->updatePoints(points);
    EXPECT_EQ(points, getPlayer()->getPoints());

    unsigned const huevos{ 1 };
    getPlayer()->updateHuevos(huevos);
    EXPECT_EQ(huevos, getPlayer()->getHuevos());

    bool const flag{ true };
    getPlayer()->updatePlayer(flag);
    EXPECT_TRUE(getPlayer()->getUpdated());
}

TEST_F(TestPlayer, AdjustPlayerPointsTest)
{
    unsigned const points{ 10 };
    getPlayer()->updatePoints(points);

    ASSERT_EQ(10, getPlayer()->getPoints());

    getPlayer()->adjustPlayerPoints();
    ASSERT_EQ(0, getPlayer()->getPoints());

    // Add a total of 30 points
    getPlayer()->updatePoints(points);
    getPlayer()->updatePoints(points);
    getPlayer()->updatePoints(points);

    ASSERT_EQ(30, getPlayer()->getPoints());
    getPlayer()->adjustPlayerPoints();
    ASSERT_EQ(20, getPlayer()->getPoints());
}

TEST_F(TestPlayer, TotalHuevosTest)
{
    unsigned const huevos{ 1 };
    getPlayer()->updateHuevos(huevos);

    ASSERT_EQ(1, getPlayer()->getHuevos());

    getPlayer()->updateHuevos(huevos);
    ASSERT_EQ(2, getPlayer()->getHuevos());
}

TEST_F(TestPlayer, LastPointsTest)
{
    unsigned const points{ 50 };
    getPlayer()->updatePoints(points);

    ASSERT_EQ(points, getPlayer()->getLastPoints());
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}





















