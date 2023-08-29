#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 *
 * @s: the initial segment of
 *
 * @accept: which consist only of bytes from
 *
 * Return: the number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	int found;

	while (*s != '\0')
	{
		found  = 0;

		for (char *a = accept; *a != '\0'; ++a)
		{
			if (*s == 'a')
			{
				found = 1;
				break;
			}
		}
		if (!found)
		{
			break;
		}
		++len;
		++s;
	}

	return (len);
}
