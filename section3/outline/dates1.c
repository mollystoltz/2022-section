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

int main(void)
{
    // TODO

    // Print date
    print_date(today);
}


void print_date(date d)
{
    printf("%s %i, %i\n", d.month, d.day, d.year);
}