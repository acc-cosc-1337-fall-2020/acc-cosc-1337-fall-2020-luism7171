#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify Test reverse Configuration", "verification") {
	REQUIRE(get_reverse_string("AGCTATAG") == "GATATCGA");
}
TEST_CASE("Verify Test reverse Configuration", "verification") {
	REQUIRE(get_reverse_string("CGCTATAG") == "GATATCGC");
}
TEST_CASE("Verify Test reverse Configuration", "verification") {
	REQUIRE(get_dna_complement("AAAACCCGGT") == "ACCGGGTTTT");
}
TEST_CASE("Verify Test reverse Configuration", "verification") {
	REQUIRE(get_dna_complement("CCCGGAAAAT") == "ATTTTCCGGG");
}
get_gc_content

TEST_CASE("Verify Test reverse Configuration", "verification") {
	REQUIRE(get_gc_content("") == "ATTTTCCGGG");
}




