#include "main.h"

/**
 * rot13 - encodes a string into rot13
 * 
 * @s - string to be encoded
 * return char* 
 */
char *rot13(char *str)
{
    int i;
    int count = 0;
    char *letters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char *rot13 = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

    while (str[count] != '\0')
    {
        i = 0;
        while (letters[i] != '\0')
        {
            if (str[count] == letters[i])
            {
                str[count] = rot13[i];
            }
            i++;
        }
        count++;
    }
    return (str);
}