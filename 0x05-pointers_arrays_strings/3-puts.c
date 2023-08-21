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

	while (x != '\0')
	{
		_putchar("5d", &x);
		x++;
	}
	_putchar('\n');
}
