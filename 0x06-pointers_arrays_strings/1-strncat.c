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

	for (x = 0; x < n && src[x] != '\0'; x++)
	{
		dest_end[x] = src[x];
	}
	dest_end[x] = '\0';
	return (dest);
}
