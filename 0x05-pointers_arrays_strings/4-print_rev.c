#include "main.h"

void print_rev(char *s)
{
    int i;

    for (i = _strlen(s) - 1; i >= 0; i--)
    {
        _putchar(s[i]);
    }
    _putchar('\n');
}