#include "main.h"
/**
 * _atoi - str to int
 * @s: pointer
 * Return: int
 */
int _atoi(char *s)
{
	int u = 0;
	unsigned int v = 0;
	int x = 1;
	int w = 0;

	while (s[u])
	{
		if (s[u] == 45)
		{
			x *= -1;
		}

		while (s[u] >= 48 && s[u] <= 57)
		{
			w = 1;
			v = (v * 10) + (s[u] - '0');
			u++;
		}
		if (w == 1)
		{
			break;
		}
		u++;
	}
	v *= x;
	return (v);
}
