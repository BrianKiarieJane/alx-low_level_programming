#include "main.h"
/**
*print_rev - a function that prints a string, in reverse.
*@s: char
*@*s: pointer to char s
*return: Always 0
*/
void print_rev(char *s)
{
	for (*s != '\0'; *s >= 0; *s--)
	{
		*s  - 1;
		_putchar(*s);
	}
	_putchar('\n');
}
