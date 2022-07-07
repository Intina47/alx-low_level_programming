#include "main.h"

void print_numbers(void)
{
	int i;
	for(int i=0; i < 10; i++)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar("\n");
}
