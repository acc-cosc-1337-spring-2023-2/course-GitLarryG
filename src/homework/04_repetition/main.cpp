//write include statements
#include"dna.h"
//write using statements
using std::cin; using std::cout; using std::string;

/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	int decision = 0;
	auto exit = false;
	int result = 0;
	//do while menu in main
	do
	{
		cout<<"\n1-Factorial\n";
		cout<<"2-Greatest Common Divisior\n";
		cout<<"3-Exit\n\n";
		cout<<"Option:";
		cin>>decision;
		if(decision == 1)
		{
			int num = 0;
			cout<<"\nEnter a positive num: ";
			cin>>num;
			result = factorial(num);
			cout<<"Result: "<<result<<"\n\n";
			exit = false;
		}
		else if(decision == 2)
		{
			int num1 = 0;
			int num2 = 0;
			cout<<"\nEnter num1: ";
			cin>>num1;
			cout<<"Enter num2: ";
			cin>>num2;
			result = gcd(num1, num2);
			cout<<"The greatest common divisor is "<<result<<"\n\n";
			exit = false;
		}
		else if(decision == 3)
		{
			string exit_decision = "";
			cout<<"Are you sure you want to exit? \ny/n: ";
			cin>>exit_decision;
			if (exit_decision == "y"; exit_decision == "Y")
			{
				exit = true;
			}
			else
			{
				exit = false;
			}
		}
		else
		{
			cout<<"Invalid input, please try again";
		}
	}
	while(exit == false);
}