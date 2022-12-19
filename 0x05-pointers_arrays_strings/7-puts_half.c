#include "main.h"
/**
 * puts_half - prts halfstr
 * @str: str
 * Return: 0
 */
void puts_half(char *str)
{
	int x, b;

	x = 0;

	while (str[x] != '\0')
		x++;
	if (x + 1 % 2 != '0')
		b = (x - 1) / 2;
	else
		b = (x / 2);
	b++;

	for (x = b; str[x] != '\0'; x++)
		_putchar(str[x]);
	_putchar('\n');
}
