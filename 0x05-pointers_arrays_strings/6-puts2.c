#include "main.h"
/**
*puts2 - a function that prints every other character of a string
*@str: str
*@*str: ptr to str
*Return: ALways 0
*/
void puts2(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x--)
	{
		if (x % 2 == 0)
		{
			_putchar(str[x]);
		}
		_putchar('\n');
	}
}
