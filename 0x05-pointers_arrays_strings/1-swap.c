#include "main.h"

/**
 * @brief: swap_int - function that takes a pointer and swaps its value with the value of the pointer to the right
 * 
 * @param a: pointer to be processed
 * @param b : pointer to be processed
 */
void swap_int(int *a, int *b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}
