#include "main.h"
/**
 * *string_toupper - change lower to upper
 * @x: int
 * Return: 0
 */
char *string_toupper(char *x)
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
