#include "main.h"
/**
 * *_strcat - concatenates 2 str
 * @dest: str
 * @src: str
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	char *end = dest;

	while (*end != '\0')
	{
		end++;
	}
	while (*src != '\0')
	{
		*end = *src;
		end++;
		src++;
	}
	*end = '\0';
	return (dest);
}

