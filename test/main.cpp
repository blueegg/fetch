#include <gtest/gtest.h>

unsigned int Factorial( unsigned int number ) {
    return number <= 1 ? number : Factorial(number-1)*number;
}

TEST( Factorials, f) {
    EXPECT_EQ( Factorial(1),1 );
    EXPECT_EQ( Factorial(2),2 );
    EXPECT_EQ( Factorial(3),6 );
    EXPECT_EQ( Factorial(10),3628800 );
}

GTEST_API_ int main(int argc, char **argv)
{
    // spdlog::set_level(spdlog::level::debug);
    // printf("Running main() from %s\n", __FILE__);
    testing::InitGoogleTest(&argc, argv);

    // testing::AddGlobalTestEnvironment();
    for (int i = 1; i < argc; ++i)
    {
        std::cout << "arg " << i << " =  " << argv[i] << std::endl;
    }

    return RUN_ALL_TESTS();
}
