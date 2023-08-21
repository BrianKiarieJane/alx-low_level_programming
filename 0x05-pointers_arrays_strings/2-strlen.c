#include "main.h"
/**
*_strlen - function that returns the length of a string.
*@s: int
*@*s: pointer to int s
*Return: Always 0
*/
int _strlen(char *s)
{
	int x = 0;

	while (*s != '\0')
	{
		x++;
		*s++;
	}
	return (x);
}
