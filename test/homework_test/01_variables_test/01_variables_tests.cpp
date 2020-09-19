#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "variables.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify get_sales_tax function") 
{
	REQUIRE(get_sales_tax(10) == .625);
  REQUIRE(get_sales_tax(20) == 1.25);
}

TEST_CASE("Verify get_tip_amount function") 
{
	REQUIRE(get_tip_amount(20,.15) == 3);
  REQUIRE(get_tip_amount(20,.20) == 4);
}

