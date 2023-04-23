//write include statement for decisions header
#include "decisions.h"

//Write code for function(s) code here
string get_letter_grade_using_if(int grade)
{
    string letter_grade;

    if (grade >= 90 && grade <= 100)
    {
        letter_grade = "A";
    }
    else if (grade >= 80 && grade < 90)
    {
        letter_grade = "B";
    }
    else if (grade >= 70 && grade < 80)
    {
        letter_grade = "C";
    }
    else if (grade >= 60 && grade < 70)
    {
        letter_grade = "D";
    }
    else if (grade >= 00 && grade < 60)
    {
        letter_grade = "F";
    }
    else
    {
        letter_grade = "Invalid Grade";
    }

    return letter_grade;
}

string get_letter_grade_using_switch(int grade)
{
    string letter_grade;
    //to simplify a range of grades into a constant I will divide by 10
    //because the switch doesn't accept ranges as cases, only constants
    int case_grade = grade/10;
    switch(case_grade)
    {
    case 10:
    case 9://90-100 will turn into 9 & 10, recieving A's
        letter_grade = "A";
        break;
    case 8://80-89 will turn into 8, recieving B's
        letter_grade = "B";
        break;
    case 7://70-79 will turn into 7, recieving C's
        letter_grade = "C";
        break;
    case 6://60-69 will turn into 6, recieving D's
        letter_grade = "D";
        break;
    case 5://50-59 will turn into 5,
    case 4://40-49 will turn into 4,
    case 3://30-39 will turn into 3,
    case 2://20-29 will turn into 2,
    case 1://10-19 will turn into 1,
    case 0://0-9 will turn into 0, all will recieve F's
        letter_grade = "F";
        break;
    default://default incase user enters something outside of the range
        letter_grade = "Invalid Grade";
        break;
    }

    return letter_grade;
}