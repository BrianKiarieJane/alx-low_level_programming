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

	while (*(dest + x) != '\0')
	{
		x++;
	}
	while (y < n)
	{
		*(dest + x) = *(src + y);
		if (*(src + y) == '\0')
			break;
		x++;
		y++;
	}
	return (dest);
}
