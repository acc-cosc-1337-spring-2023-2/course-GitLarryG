//write include statements
#include "decisions.h"

int main() 
{
	int grade = 0;
	int menu_option = 0;
	string result;
	cout<<"MAIN MENU\n";
	cout<<"1-Letter grade using if\n";
	cout<<"2-Letter grade using switch\n";
	cout<<"3-Exit\n\n";

	cin>>menu_option;

	
	

	switch (menu_option)
	{
	case 1:
		cout<<"Enter grade: ";
		cin>>grade;
		if (grade >= 0 && grade <= 100)
			{
				cout<<"Letter Grade: "<<get_letter_grade_using_if(grade)<<"\n";
			}
		else
		{
			cout<<"You entered a number outside of 0-100, please try again.";
		}
		break;
	
	case 2:
		cout<<"Enter grade: ";
		cin>>grade;
		if (grade >= 0 && grade <= 100)
		{
			cout<<"Letter Grade: "<<get_letter_grade_using_switch(grade)<<"\n";
		}
		else
		{
			cout<<"You entered a number outside of 0-100, please try again.";
		}
		break;
	
	case 3:
		cout<<"Exiting...";
		break;
	default:
		break;
	}
	
	return 0;
}