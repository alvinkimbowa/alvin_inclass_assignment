#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "test.h"
#include <cmath>

TEST_CASE( "Tests1", "[T2]" ) {
    REQUIRE(fabs(test_code("Tests/input1.txt") - 975.2295719844358) < 0.01);
}
