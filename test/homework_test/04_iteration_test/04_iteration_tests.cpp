#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}


TEST_CASE("Test get gc content", "verification") {
	REQUIRE( get_gc_content("AGCTATAG")== .375);
}
TEST_CASE("Test get_gc_content", "verification") {
	REQUIRE( get_gc_content("CGCTATAG")== .50);
}
TEST_CASE("reverse string", "verification") {
	REQUIRE( get_reverse_string("CGCTATAG")== "GATATCGC" );
}
TEST_CASE("Test get reverse string", "verification") {
	REQUIRE( get_reverse_string("AGCTATAG")== "GATATCGA");
}

TEST_CASE("Test dna complement", "verification") {
	REQUIRE( get_dna_complement("AAAACCCGGT")== "ACCGGGTTTT");
}
TEST_CASE("Test dna complement", "verification") {
	REQUIRE( get_dna_complement("CCCGGAAAAT")== "ATTTTCCGGG");
}
