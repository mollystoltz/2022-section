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

int main(void)
{
    // Initialize date
    date today;

    // Add values
    today.day = 20;
    today.month = "September";
    today.year = 2022;

    // Print date
    print_date(today);
}


void print_date(date d)
{
    printf("%s %i, %i\n", d.month, d.day, d.year);
}