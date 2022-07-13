#include "main.h"

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
        for (i = 0; i < n; i++)
        {
                _putchar(str[i]);
        }
        _putchar('\n');
}