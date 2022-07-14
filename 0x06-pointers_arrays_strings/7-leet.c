#include "main.h"

char *leet(char *)
{
    int i;
    char *str;
    str = malloc(sizeof(char) * 100);
    if (str == NULL)
        return (NULL);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'A')
            str[i] = '4';
        else if (str[i] == 'e' || str[i] == 'E')
            str[i] = '3';
        else if (str[i] == 'l' || str[i] == 'L')
            str[i] = '1';
        else if (str[i] == 'o' || str[i] == 'O')
            str[i] = '0';
        else if (str[i] == 't' || str[i] == 'T')
            str[i] = '7';
    }
    return (str);
}