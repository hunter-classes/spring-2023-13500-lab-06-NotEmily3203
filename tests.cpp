#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "caesar.h"

// add your tests here
TEST_CASE("Correct Caesar Cases"){
    CHECK(encryptCaesar("Hello, World!", 10)== "Rovvy, Gybvn!");
    CHECK(encryptCaesar("Way to Go!", 5) == "Bfd yt Lt!");
}