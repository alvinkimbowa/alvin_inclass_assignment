#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "test.h"
#include <cmath>

TEST_CASE( "Tests2", "[T2]" ) {
    REQUIRE(test_code("Tests/input2.txt")==3);
}
