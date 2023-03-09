//add include statements
#include<iostream>
#include"dna.h"
using std::swap;
//add function(s) code here

int factorial(int num)
{
    auto result = 1;
    int prenum = 1; 
    while (prenum <= num)
    {
        result*=prenum;
        prenum++;
    }
    return result;
}

int gcd(int num1, int num2)
{
    while (num1 != num2)
    {
        if(num1 < num2)
        {
            swap(num2, num1);
        }
        else if(num1 > num2)
        {
            num1 = num1 - num2;
        }
    }
    return num1;
}