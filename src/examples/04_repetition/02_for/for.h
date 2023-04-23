#include<iostream>
using std::cin;
using std::cout;

//Write function prototype for a function named display_numbers 
void display_numbers(int num)
{
    for(auto i=0; i < num; i++)
    {
        cout<<i+1<<"\n";
    }
}
//that accepts an int and returns void
int sum_of_squares_for(int num)
{
    auto sum = 0;
    // for(auto i=0; i <= num; i++)
    for(; num > 0; num--)
    {
        sum+= num*num;
    }
    return sum;
}
