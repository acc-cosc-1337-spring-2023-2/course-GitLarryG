#include<iostream>
#include "if.h"//to use is_even function here

using std::cout;
using std::cin;

int main() 
{
	//create a bool variable named even

	//create an int variable named value

	//prompt user for a keyboard number
	//assign the number to the value variable

	//call the is_even function with value as its argument
	//and assign its return value to the even variable

	auto overtime = is_overtime(hours);

	if(overtime == true)
	{
		cout<<"overtime\n";
	}
	else(overtime == false)
	{
		cout<<"no overtime\n"
	}


	//display even if number is even
	if(even)
	{
		cout<<value<<" is even\n";
	}
	else
	{
		cout<<value<<" is odd\n";
	}
	return 0;
}
