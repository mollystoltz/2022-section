#include <stdio.h>
#include <cs50.h>
#include <string.h>

// Make Struct
typedef struct
{
    int day;
    int year;
    int month;
}
date;

int main(void)
{
    // Initialize date
    date today;
    // Add values
    today.day = 20;
    today.year = 2022;
    today.month = "September";
    // Print date
    printf("%s %i, %i\n", today.month, today.day, today.year);
}
