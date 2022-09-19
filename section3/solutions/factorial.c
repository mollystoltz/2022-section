#include <stdio.h>
#include <cs50.h>

int fact(int);

int main(void)
{
    int n = get_int("Number: ");
    printf("%i! = %i\n", n, fact(n));
}

int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * fact(n - 1);
}