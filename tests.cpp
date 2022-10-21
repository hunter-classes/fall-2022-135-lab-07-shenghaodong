#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

// add your tests here
TEST_CASE("Remove Leading Spaces"){
    CHECK(removeLeadingSpaces("      There is a space in front") == "There is a space in front");
    CHECK(removeLeadingSpaces("                     Testing 1 2 3") == "Testing 1 2 3");
    CHECK(removeLeadingSpaces("Hunter College") == "Hunter College");
}

TEST_CASE("Count Character"){
    CHECK(countChar("Hunter College", 'e') == 3);
    CHECK(countChar("Daedalus", 'a') == 2);
    CHECK(countChar("Friday", 'r') == 1);
}
