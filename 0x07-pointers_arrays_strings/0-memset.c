#include "main.h"
/**
 * *_memset - fills memory with a constant byte
 * @s: char
 * @b: char
 * @n: unsigned int
 * Return: 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x = 0;

	while (x < n)
	{
		s[x] = b;
		x++;
	}
	return (s);
}
