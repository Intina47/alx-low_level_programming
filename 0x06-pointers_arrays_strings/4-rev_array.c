#include "main.h"

/**
 * rev_array - reverses an array of integers
 * 
 * @param a - array of integers
 * @param n - size of array
 */
void reverse_array(int *a, int n)
{
    int i, j, temp;
    i = 0;
    j = n - 1;
    while (i < j)
    {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }
}