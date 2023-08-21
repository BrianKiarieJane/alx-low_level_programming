#include "main.h"
/**
*rev_string - function that reverses a string.
*@s: char
*@*s: pointer to str
*Return: Always 0
*/
void rev_string(char *s)
{
	int x;

	while (s[x] != '\0')
		x++;

	for (x = s - 1; x >= 0; x--)
	{
		_putchar(s);
	}
}
