#include "main.h"

/**
 * @brief strncat - concatenates two strings
 * @param dest - destination string
 * @param src - string to be concatenated
 * @param n - number of bytes to be concatenated
 * @return dest
 */
char *_strncat(char *dest, char *src, int n)
{
    int i, j;
    i = 0;
    j = 0;
    while (dest[i] != '\0')
        i++;
    while (src[j] != '\0' && j < n)
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return (dest);
}