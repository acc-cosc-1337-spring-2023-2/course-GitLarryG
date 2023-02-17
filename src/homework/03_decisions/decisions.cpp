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
    int case_grade = grade/10;
    switch(case_grade)
    {
    case 10:
    case 9:
        letter_grade = "A";
        break;
    case 8:
        letter_grade = "B";
        break;
    case 7:
        letter_grade = "C";
        break;
    case 6:
        letter_grade = "D";
        break;
    case 5:
    case 4:
    case 3:
    case 2:
    case 1:
    case 0:
        letter_grade = "F";
        break;
    default:
        letter_grade = "Invalid Grade";
        break;
    }

    return letter_grade;
}