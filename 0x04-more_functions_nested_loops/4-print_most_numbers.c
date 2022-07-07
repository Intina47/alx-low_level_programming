#include <main.h>

void print_most_numbers(void)
{
	int l_case;
	for(l_case = 0; l_case <= 9; l_case++)
	{
		if(l_case != 2 && l_case != 4)
			continue;
		else
			_putchar(l_case + '0');
	}
	_putchar('\n');
}
