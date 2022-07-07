#include <main.h>

void print_most_numbers(void)
{
	int l_case;
	for(l_case = 0; l_case <= 9; l_case++)
	{
		if(l_case != 2 && l_case != 4)
		{
			putchar(l_case);
		}

	}
	putchar('\n');
	return (0);
}
