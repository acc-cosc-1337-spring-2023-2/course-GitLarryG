#include "expressions.h"
#include<iostream>


using std::cout; using std::cin;

int main()
{
    auto num1 = 0, num2 = 0, num3 = 0;
    
    cout<<"enter value for num1: ";
    cin>>num1;

    cout<<"enter value for num2: ";
    cin>>num2;

    cout<<"enter value for num3: ";
    cin>>num3;

    auto result = operator_precedence_1(num1, num2, num3);
    cout<<"Result is: "<<result<<"\n";
    
    return 0;
}