#include "catch.hpp"
#include "testBuild/Input/Input.hpp"

TEST_CASE("testing input")
{
    Input i(3);
    REQUIRE(i.getGenus() == 3);
}
