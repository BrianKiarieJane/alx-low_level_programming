#include "main.h"
/**
 *  _strspn - a function that gets the length of a prefix substring
 * @s: the initial segment of
 * @accept: which consist only of bytes from
 * Return: the number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	int k = 0;

	while (s[j] != '\0')
	{
		if (s[j] != 32)
		{
			while (accept[k] != '\0')
			{
				if (s[j] == accept[k])
					i++;
				k++;
			}
		}
		else
			return (i);
		j++;
	}
		return (i);
}
