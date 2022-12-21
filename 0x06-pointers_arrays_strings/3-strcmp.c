#include "main.h"
/**
 * _strcmp - compare 2 str
 * @s1: str1
 * @s2: str2
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int x, y = 0;

	while (y == 0)
	{
		if ((*(s1 + x) == '\0') && (*(s2 + x) == '\0'))
			break;
		y = *(s1 + x) - *(s2 + x);
		x++;
	}
	return (y);
}
