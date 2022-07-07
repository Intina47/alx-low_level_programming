#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int -islower(int c)
{
	char l_case;
	for(l_case= 'a'; l_case <= 'z'; l_case++)
	{
		if(c == l_case)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
}
