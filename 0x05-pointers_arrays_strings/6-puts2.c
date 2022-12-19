#include "main.h"
/**
 * puts2 - prts char
 * @str: str
 * Return: 0
 */
void puts2(char *str)
{
	int q;

	q = 0;

	for (; str[q] != '\0'; q++)
	{
		if (q % 2 == 0)
		{
			_putchar(str[q]);
		}
	}
	_putchar('\n');

}
