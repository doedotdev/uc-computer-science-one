#include <iostream>
#include <gtest/gtest.h>
#include <gmock/gmock.h>


int main(int argc, char* argv[]) {
    std::cout << "Linked List + Tests!" << std::endl;
    testing::InitGoogleTest(&argc, argv);
    RUN_ALL_TESTS();
    return 0;
}