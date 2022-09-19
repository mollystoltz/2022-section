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
    // TODO
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