#include "main.h"
/**
*_puts - a function that prints a string, followed by a new line,to stdout
*@str:  str
*@*str: pointer to str
*Return: Always 0
*/
void _puts(char *str)
{
	int x = *str;

	while ((x = *str++) != '\0')
	{
		_putchar(x);

	}
	_putchar('\n');
}
