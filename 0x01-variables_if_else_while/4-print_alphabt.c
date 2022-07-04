#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char l_case;
	for(l_case = 'a'; l_case <= 'z'; l_case++)
	{
		if(l_case != 'e' && l_case != 'q')
		{
			putchar(l_case);
		}

	}
	putchar('\n');
	return (0);
}
