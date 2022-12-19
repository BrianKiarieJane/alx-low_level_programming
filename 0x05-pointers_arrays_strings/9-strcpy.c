#include "main.h"
/**
 * *_strcpy - cp str
 * @dest: char
 * @src: char
 * Return: 0
 */
char *_strcpy(char *dest, char *src)
{
	int z;

	z = 0;

	while (src[z] != '0')
	{
		z++;
		dest[z] = src[z];
	}
	dest[z] = '0';
	return (dest);
}
