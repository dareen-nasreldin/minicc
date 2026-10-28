#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

TEST_CASE("Throwaway math test to verify framework") {
    // This is the assertion that will generate our passing green line
    CHECK(1 + 1 == 2);
}