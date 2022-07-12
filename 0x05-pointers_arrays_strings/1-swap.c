#include "main.h"

/**
 * swap_int - function that takes a pointer and swaps its value
 * @a: pointer to an integer
 * @b: pointer to an integer
 */
void swap_int(int *a, int *b)
{
    int tmp;
    
    tmp = *a;
    *a = *b;
    *b = tmp;
}
