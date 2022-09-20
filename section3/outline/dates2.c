#include <stdio.h>
#include <cs50.h>
#include <string.h>

typedef struct
{
    int day;
    string month;
    int year;
}
date;

void print_date(date);
date get_date(void);

int main(void)
{
    date dates[3]; //always specify the size with arrays
    //assigning dates
    for (int i = 0; i < 3; i++)
    {
        dates[i] = get_date();
    }
    
    //printing out dates
    for (int i = 0; i < 3; i++)
    {
        print_date(dates[i]);
    }
}


void print_date(date d)
{
    printf("%s %i, %i\n", d.month, d.day, d.year);
}

date get_date(void)
{
    date d;
    d.day = get_int("Day: ");
    d.month = get_string("Name of month: ");
    d.year = get_int("Year: ");
    return d;
}
