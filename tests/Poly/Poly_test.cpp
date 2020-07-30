#include "catch.hpp"
#include "testBuild/Poly/Poly.hpp"


TEST_CASE("testing poly")
{
    Poly p({"a", "b"}); // a+bx
    REQUIRE(p.getIndex(0) == "a");
    REQUIRE(p.getIndex(1) == "b");
}
