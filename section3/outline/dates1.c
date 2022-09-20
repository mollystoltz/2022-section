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

date get_date(void);
void print_date(date d);

int main(void)
{
    // TODO
    date today = get_date(); /prompts user for a date and assigns that to a variable 
    // Print date
    print_date(today);
}

//abstract date printing into a function
void print_date(date d)
{
    printf("%s %i, %i\n", d.month, d.day, d.year);
}

date get_date(void)
{
    date d;
    d.day = get_int("Day: "\n);
    d.month = get_string("Month: "\n);
    d.year = get_int("Year: "\n);
    return d;
}

