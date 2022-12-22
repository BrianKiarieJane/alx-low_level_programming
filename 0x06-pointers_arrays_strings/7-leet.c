#include "main.h"
/**
 * *leet - encodes str
 * @s: str
 * Return: 0
 */
char *leet(char *s)
{
	int k;
	int l;
	char x[] = "aAeEoOtTlL";
	char y[] = "4433007711";

	for (k = 0; *(s + k); k++)
	{
		for (l = 0; l <= 9; l++)
		{
			if (x[l] == s[k])
				s[k] = y[l];
		}
	}
	return (s);
}
