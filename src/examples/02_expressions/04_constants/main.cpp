#include "constants.h"
#include<iostream>
using std::cout; 
using std::cin;

int main()
{
    double radius;
    cout<<"Enter the radius: ";
    cin>>radius;
    double area = get_area_of_circle(radius);
    cout<<"the area is: "<<area<<"\n";
}