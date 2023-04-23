//cpp

#include"arrays_access.h"

using std::cout; using std::cin;
using std::setw;

void pupulate_times_table(int times_table[][COLS])
{
    for(int i=0; i < ROWS; ++i)
    {
        for(int j=0; j < COLS; ++j)
        {
            times_table[i][j] = (i + 1) * (j + 1);
        }
    }
}

void display_times_table(int times_table[][COLS])
{
    for(int i=0; i < ROWS; ++i)
    {
        for(int j=0; j < COLS; ++j)
        {
            cout<<setw(4)<<times_table[i][j];
        }
        cout<<"\n";
    }
}
