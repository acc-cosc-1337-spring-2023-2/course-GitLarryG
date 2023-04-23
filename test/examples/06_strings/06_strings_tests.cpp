#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "function_str.h"
#include "for_ranged_str.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test string value, ref, and const ref params")
{
	string s1 = "C++";
	string s2 = "C++";
	string s3 = "C++";

	str_val_param(str1, str2, str3);

	REQUIRE(str1 == "C++");
	REQUIRE(str2 == "changed");
	REQUIRE(str)3 == "C++";


}

TEST_CASE("Test string value parameter w for range")
{
	string str = "C++";
	iterate_string_val_params(str);

	REQUIRE(str == "C++");
}
