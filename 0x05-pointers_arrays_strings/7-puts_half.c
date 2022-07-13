#include "main.h"

/**
 * puts_half - prints the half of a string
 * @str: string to print half of
 */
void puts_half(char *str)
{ 
      int i = 0;
      int n;
        while (str[i] != '\0')
        {
                i++;
        }
        n = i / 2;
        if(n%2 == 1)
        {
            n++;
        }
        for (n = 0; n < i; n++)
        {
                _putchar(str[n]);
        }
        _putchar('\n');
}