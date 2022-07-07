#include "main.h"
int main(void)
{
	char *put = "_putchar";
	while(*put)
	{
		_putchar(*put);
		put++;
	}
	_putchar("\n");
	return (0);
}
