#include "main.h"

/**
 * @brief leet - encodes a string into 1337
 * 
 * @param str - string to be encoded
 * @return char* 
 */
char *leet(char *str)
{
   int i = 0;
   int count = 0;
    char *letters = "aAeEoOtTlL";
    char *numbers = "4433007711";
    while (str[i] != '\0')
    {
        count = 0;
        while (letters[count] != '\0')
        {
            if (str[i] == letters[count])
            {
                str[i] = numbers[count];
            }
            count++;
        }
        i++;
    }
    return (str);
}