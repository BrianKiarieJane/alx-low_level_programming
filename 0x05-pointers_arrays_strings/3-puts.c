#include "main.h"
/**
 * _puts - prts a str
 * @str: str
 * return: 0
 */
void _puts(char *str)
{
	int g = 0;
	
	while (str[g] != '\0')
	{
		_putchar(str[g]);
		g++;
		_putchar('\n');
	}
}
