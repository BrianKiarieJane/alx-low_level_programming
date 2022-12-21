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
	int x;

	for (x = 0; dest[x] != '\0'; x++)
	{
		continue;
	}
	for (y = 0; y < n && src[y] != '\0'; y++)
	{
		dest[x + y] = src[y];
	}
	dest[x] = '\0';
	return (dest);
}
