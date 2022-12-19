#include "main.h"
/**
 * print_rev - reverse
 * @s: str
 * Return: 0
 */
void print_rev(char *s)
{
	int k;
	int z;

	k = 0;

	while (s[k] != '\0')
	{
		k++;
	}
	
	for (z = k - 1; z >= 0; z--)
	{
		_putchar(s[z]);
	}
	_putchar('\n');
}
