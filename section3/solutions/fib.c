#include <stdio.h>
#include <cs50.h>

int fib(int);

int main(void)
{
    int n = get_int("Number: ");
    printf("The %ith Fibonacci number is %i\n", n, fib(n));
}

int fib(int n)
{
    if (n == 1 || n == 2)
    {
        return 1;
    }
    return fib(n - 1) + fib(n - 2);
}