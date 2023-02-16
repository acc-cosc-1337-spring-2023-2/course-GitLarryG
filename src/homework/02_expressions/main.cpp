//write include statements
#include "hwexpressions.h"
#include<iostream>
using std::cout; using std::cin;

//write namespace using statement for cout


/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
	double meal_amount = 0;
	double tip_rate = 0;
	double tip_amount = 0;
	double tax_amount = 0;
	double total = 0;

	cout<<"Enter the cost of the meal: ";
	cin>>meal_amount;
	tax_amount = get_sales_tax(meal_amount);

	cout<<"Enter the desired tip percentage: ";
	cin>>tip_rate;

	tip_amount = get_tip_amount(meal_amount, tip_rate);

	total = meal_amount+tip_amount+tax_amount;

	cout<<"Meal Amount:		"<<meal_amount<<"\n";
	cout<<"Sales Tax:		"<<tax_amount<<"\n";
	cout<<"Tip Amount:		"<<tip_amount<<"\n";
	cout<<"Total:			"<<total<<"\n";

	return 0;
}
