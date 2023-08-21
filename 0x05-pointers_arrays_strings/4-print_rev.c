#include "main.h"
/**
*print_rev - a function that prints a string, in reverse.
*@s: char
*@*s: pointer to char s
*return: Always 0
*/
void print_rev(char *s)
{
	int x, y;

	while (s[x] != '\0')
	{
		x++;
	}

	for (x = s; x >= 0; x--)
	{
		_putchar(s[x]);
	}
	_putchar('\n');
}
