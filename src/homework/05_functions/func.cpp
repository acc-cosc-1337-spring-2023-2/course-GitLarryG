//add include statements
#include "func.h"
#include<iostream>
using std::string; using std::cout;
//add function code here

//The GC-content of a DNA string is given by the percentage of symbols
// in the string that are 'C' or 'G'. For example, the GC-content of 
//"AGCTATAG" is 37.5% (3/8).
double get_gc_content(const string& dna)
{
    int count = 0;
    int length = dna.size();
    for (int letter = 0; letter < length; letter++)
    {
        if (dna[letter] == 'C')
        {
            count ++;
        }
        if (dna[letter] == 'G')
        {
            count ++;
        }
    }
    double full_length = dna.size();
    double percentage_gc = count/full_length;
    return percentage_gc;
}
string get_dna_completion(string dna)
{
    string reversed_dna = "";
    string reverse_temp = get_reverse_string(dna);
    int length = dna.size();
    for (int letter = 1; letter <= length; letter++)
    {
        if (reversed_dna[letter] == 'A')
        {
            reversed_dna[letter] = 'T';
        }
        else if (reversed_dna[letter] == 'T')
        {
            reversed_dna[letter] = 'A';
        }
        else if (reversed_dna[letter] == 'C')
        {
            reversed_dna[letter] = 'G';
        }
        else if (reversed_dna[letter] == 'G')
        {
            reversed_dna[letter] = 'C';
        }
    }
    return reversed_dna;

}

string get_reverse_string(string dna)
{
    string rev_dna = "";
    int length = dna.size();
    for (int letter = 1; letter <= length; letter++)
    {
        rev_dna += dna[length - letter];
    }
    return rev_dna;
}