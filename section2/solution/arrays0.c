#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Set up array
    int doubles[10];
    doubles[0] = 1;
    for (int i = 1; i < 10; i++)
    {
        doubles[i] = doubles[i - 1] * 2;
    }

    // Print array values
    for (int i = 0; i < 10; i++)
    {
        printf("%i\n", doubles[i]);
    }
}