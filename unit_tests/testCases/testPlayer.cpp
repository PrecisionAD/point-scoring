#include "../../Player/src/Player.cpp"

#include <gtest/gtest.h>

class TestPlayer : public testing::Test
{
public:
    TestPlayer();
    Player* getPlayer();

// protected:
//     void SetUp() override;

private:
    Player* mCurrentPlayer;
};

TestPlayer::TestPlayer() :
    mCurrentPlayer{ new Player }
{}

Player* TestPlayer::getPlayer()
{
    return mCurrentPlayer;
}

// void SetUp()
// {
// }

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

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}





















