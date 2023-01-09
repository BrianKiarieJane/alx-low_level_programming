#include "main.h"
/**
 * _memcpy -  copies memory area
 * @dest: char
 * @src: char
 * @n: unsigned int
 * Return: 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x = 0;

	while (x < n)
	{
		dest[x] = src[x];
		x++;
	}
	return (dest);
}
