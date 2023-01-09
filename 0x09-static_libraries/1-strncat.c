#include "main.h"
/**
 * *_strncat - concatenates 2 str
 * @dest: char
 * @src: char
 * @n: int
 * Return: pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int x, y = 0;

	for (x = 0; dest[x] != '\0'; x++)
	{
		continue;
	}
	for (y = 0; src[y] != '\0' && y < n; y++)
	{
		dest[x + y] = src[y];
	}
	dest[x + y] = '\0';
	return (dest);
}
