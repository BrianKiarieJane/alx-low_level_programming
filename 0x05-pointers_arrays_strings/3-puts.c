#include "main.h"
/**
 * _puts - prts a str
 * @str: str
 * return: 0
 */
void _puts(char *str)
{
	int g = *str;

	_putchar("%p\n", &g);
	return (0);
}
