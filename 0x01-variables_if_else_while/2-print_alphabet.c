#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char input = 'a';
	while(input <= 'z')
	{
		putchar(input);
		input++;
	}
	putchar('\n');
	return (0);
}
