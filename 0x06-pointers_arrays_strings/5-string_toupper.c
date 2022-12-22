#include "main.h"
/**
 * *string_toupper - change lower to upper
 * @s: int
 * Return: 0
 */
char *string_toupper(char *s)
{
	int x = 0;

	while (*(s + x))
	{
		if (*(s + x) >= 'a' && *(s + x) <= 'z')
			*(s + x) -= 'a' - 'A';
		x++;
	}
	return (x);
}
