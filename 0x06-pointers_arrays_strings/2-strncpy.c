#include "main.h"

/**
 * @brief _strncpy - copies a string
 * 
 * @param dest - destination string 
 * @param src - source string
 * @param n - number of bytes to be copied
 * @return char* 
 */
char *_strncpy(char *dest, char *src, int n)
{
    int i;
    i = 0;
    while (src[i] != '\0' && i < n)
    {
        dest[i] = src[i];
        i++;
    }
    while (i < n)
    {
        dest[i] = '\0';
        i++;
    }
    return (dest);
}