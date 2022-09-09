#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string text = get_string("Input: ");
    int length = strlen(text);
    for (int i = 0; i < length; i++)
    {
        printf("%c", text[i]);
    }
    printf("\n");
}