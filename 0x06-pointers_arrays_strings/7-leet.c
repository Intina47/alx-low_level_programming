#include "main.h"

char *leet(char *str)
{
   int i = 0;
   int count = 0;
    char *leet_str = str;
    while (str[i] != '\0')
    {
        if (str[i] == 'a')
        {
            leet_str[i] = '4';
            count++;
        }
        else if (str[i] == 'e')
        {
            leet_str[i] = '3';
            count++;
        }
        else if (str[i] == 'o')
        {
            leet_str[i] = '0';
            count++;
        }
        else if (str[i] == 'i')
        {
            leet_str[i] = '1';
            count++;
        }
        else if (str[i] == 't')
        {
            leet_str[i] = '7';
            count++;
        }
        i++;
    }
    if (count == 0)
    {
        return (str);
    }
    else
    {
        return (leet_str);
    }
}