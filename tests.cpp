#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "caesar.h"
#include "vigenere.h"
// add your tests here
TEST_CASE("Correct Caesar Cases"){
    CHECK(encryptCaesar("Hello, World!", 10)== "Rovvy, Gybvn!");
    CHECK(encryptCaesar("Way to Go!", 5) == "Bfd yt Lt!");
}

TEST_CASE("Correct Vigenere Cases"){
    CHECK(encryptVigenere("Hello, World!", "cake") == "Jevpq, Wyvnd!");
}