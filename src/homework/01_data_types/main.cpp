//write include statements
#include"data_types.h"
#include<iostream>
//write namespace using statement for cout
using std::cout;
using std::cin;

/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
	int num;
	cout<<"\nEnter value for num: ";
	cin>>num;

	int result = multiply_numbers(num);

	cout<<"\nThe number entered multiplied by 5 is: "<<result<<"\n";
	
	int num1 = 4;
	result = multiply_numbers(num1);
	cout<<"\n4 multiplied by 5 is: "<<result<<"\n\n";
}
