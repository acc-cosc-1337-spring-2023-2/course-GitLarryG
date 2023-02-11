#include "expressions.h"

//example
int add_numbers(int num1, int num2)
{
	return num1 + num2;
}

//write function code here

double get_sales_tax(double meal_amount)
{
	double tax_rate = .0675;
	return meal_amount*tax_rate;
}

double get_tip_amount(double meal_amount, double tip_rate)
{
	if (tip_rate < 1) //determine if the tip was input as whole number or decimal
	{
		return meal_amount*tip_rate;
	}
	else //convert to decimal if entered as whole number
	{
		tip_rate = tip_rate*.01;
		return meal_amount*tip_rate;
	}
	
}
