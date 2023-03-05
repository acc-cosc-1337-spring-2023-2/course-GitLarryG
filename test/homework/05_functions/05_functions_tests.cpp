#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include"func.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify that get_gc_content is checking the string correctly")
{
	REQUIRE(get_gc_content("AGCTATAG") == .375);
	REQUIRE(get_gc_content("CGCTATAG") == .5);
}

TEST_CASE("Verify that get_reverse_string is reversing the string correctly")
{
	REQUIRE(get_reverse_string("AGCTATAG") == "GATATCGA");
	REQUIRE(get_reverse_string("CGCTATAG") == "GATATCGC");
}

TEST_CASE("Verify that get_dna_completion is reverse and changing the string correctly")
{
	REQUIRE(get_dna_completion("AAAACCCGGT") == "ACCGGGTTTT");
	REQUIRE(get_dna_completion("CCCGGAAAAT") == "ATTTTCCGGG");
}
