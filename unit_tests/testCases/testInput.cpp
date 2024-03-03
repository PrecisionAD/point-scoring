#include "../../Input/src/Input.cpp"

#include <gtest/gtest.h>

TEST(InputClass, TotalPlayersTest)
{
    Input const input{};

    ASSERT_EQ(0, input.getTotalPlayers());
}

TEST(InputClass, AskMenuOptionTest)
{
    Input input{};

    ASSERT_EQ(2, input.askMenuOption());
    ASSERT_EQ(3, input.askMenuOption());
}
