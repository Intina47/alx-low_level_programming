#include "main.h"

void print_rev(char *s)
{
    int i;

    for (i = i - 1; s[i] != '\0'; i--)
    {
        _putchar(s[i]);
    }
    _putchar('\n');
}