#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "int.h"//C++
#include "decimals.h"


TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);//use this as a guide to build your test assertion
	
}

TEST_CASE("Test Echo Variable", "validation") {
	REQUIRE(echo_variable(5) == 5);//1
	REQUIRE(echo_variable(10) == 10);//2
	REQUIRE(echo_variable(100) == 100);//3
	REQUIRE(echo_variable(1000) == 1000);//4 purposely fail
}

TEST_CASE("Test add to double 1", "testing inconsistencies when comparing doubles") 
{
	REQUIRE(add_to_double_1(0) == .9);
}
/*test case echo_variable */

/*test case add_to_double_1 with 0 as parameter*/

/*test case add_to_double_1 with 1 as parameter*/

/*test case add_to_double_2 with 0 as parameter*/

/*test case add_to_double_2 with 1 as parameter*/

/*test case char test ASCII values */

/*test case string test ASCII values Joe characters are equal to 74, 111, and 101*/

