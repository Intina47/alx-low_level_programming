#include "main.h"

/**
 * @brief string_toupper - converts a string to uppercase
 * @param * - pointer to string
 * @return char* 
 */
char *string_toupper(char *)
{
    int i;
    char *str;
    str = malloc(sizeof(char) * 100);
    if (str == NULL)
        return (NULL);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
    }
    return (str);
}