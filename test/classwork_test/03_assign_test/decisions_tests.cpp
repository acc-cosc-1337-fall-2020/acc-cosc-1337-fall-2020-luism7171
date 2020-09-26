#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "desicion.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
TEST_CASE("Verify Test Configuration for if") {
	REQUIRE(get_letter_grade_using_if(95)=='A');
  REQUIRE(get_letter_grade_using_if(80)=='B');
  REQUIRE(get_letter_grade_using_if(75)=='C');
  REQUIRE(get_letter_grade_using_if(69)=='D');

}

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(get_letter_grade_using_switch(90) == 'A');
  REQUIRE(get_letter_grade_using_switch(80) == 'B');
  REQUIRE(get_letter_grade_using_switch(70) == 'c');
  REQUIRE(get_letter_grade_using_switch(60) == 'D');
}
