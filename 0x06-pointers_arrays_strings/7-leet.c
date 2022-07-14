#include "main.h"

char *leet(char *str)
{
   int i = 0;
   int count = 0;
    char *leet_str = str;
    while (str[i] != '\0')
    {
        if (str[i] == 'a' || str[i] == 'A')
        {
            leet_str[i] = '4';
            count++;
        }
        else if (str[i] == 'e' || str[i] == 'E')
        {
            leet_str[i] = '3';
            count++;
        }
        else if (str[i] == 'o' || str[i] == 'O')
        {
            leet_str[i] = '0';
            count++;
        }
        else if (str[i] == 'l' || str[i] == 'L')
        {
            leet_str[i] = '1';
            count++;
        }
        else if (str[i] == 't' || str[i] == 'T')
        {
            leet_str[i] = '7';
            count++;
        }
        
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