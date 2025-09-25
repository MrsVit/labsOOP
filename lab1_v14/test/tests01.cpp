#include <gtest/gtest.h>
#include "../src/task.h"


TEST(test_02, tests_with_correct_values) {
    EXPECT_EQ(replaces("aaaaaa", 'a', 'b', 1), "baaaaa"); 
    EXPECT_EQ(replaces("Привет, мое солнце!", 'е', 'а', 2), "Привет, моа солнце!");
    EXPECT_EQ(replaces("Привет, привет!", 'и', 'о', 1), "Провет, привет!");
    EXPECT_EQ(replaces("Привет, привет!", 'и', 'о', 0), "Привет, привет!");
    EXPECT_EQ(replaces("abcabcabc", 'a', 'x', 3), "abcabcxbc");
    EXPECT_EQ(replaces("abcabcabc", 'a', 'x', 4), "abcabcabc");
    EXPECT_EQ(replaces("Hello World!", 'o', 'O', 1), "HellO World!");
    EXPECT_EQ(replaces("Hello World!", 'o', '1', 1), "Hell1 World!"); 
}

TEST(test_02, tests_with_strange_values) {
    EXPECT_EQ(replaces("", 'a', 'b', 1), ""); 
    EXPECT_EQ(replaces("abcabcabc", 'a', 'x', -1), "abcabcabc"); 
    EXPECT_EQ(replaces("aaaaaa", 'a', 'b', 7), "aaaaaa"); 
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}