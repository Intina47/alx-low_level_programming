#include <stdio.h>
int _isupper(int c)
{
	char lower;
	for(lower = 'A'; lower <= 'Z'; lower++)
	{
		if(c == lower )
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
