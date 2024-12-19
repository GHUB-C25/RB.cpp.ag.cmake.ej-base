
#define CATCH_CONFIG_MAIN // defines main() automatically
#include <catch2/catch.hpp>

#include "../student.hpp" // student implementations

// =====================
// tests for exercise 1
// ---------------------

TEST_CASE("Ex1", "[example1]")
{
    REQUIRE(add(1,1) == 2);
}

// =====================
// tests for exercise 2
// ---------------------

TEST_CASE("Ex2", "[example2]")
{
    REQUIRE(mul(3,3) == 9);
}
