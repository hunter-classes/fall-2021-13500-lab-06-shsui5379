#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"
#include "caesar.h"

// add your tests here
TEST_CASE("Task B: shiftChar")
{
   CHECK(shiftChar('W', 5) == 'B');
   CHECK(shiftChar('!', 5) == '!');
   CHECK(shiftChar('a', 10) == 'k');
   CHECK(shiftChar('z', 2) == 'b');

   CHECK(shiftChar('B', -5) == 'W');
   CHECK(shiftChar('k', -10) == 'a');
   CHECK(shiftChar('b', -2) == 'z');
}

TEST_CASE("Task B: encryptCaesar")
{
   CHECK(encryptCaesar("Way to Go!", 5) == "Bfd yt Lt!");
   CHECK(encryptCaesar("", 1) == "");
   CHECK(encryptCaesar("Bfd yt Lt!", -5) == "Way to Go!");
}