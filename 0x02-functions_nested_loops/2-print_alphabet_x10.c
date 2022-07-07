#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int test_case = 0;
	char alpha;
	while(test_case < 10)
	{
		for(alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		test_case++;
		_putchar('\n');
	}
}
