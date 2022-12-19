#include "main.h"
/**
 * rev_string - rev str
 * @s: str
 * Return: 0
 */
void rev_string(char *s)
{
	char p;
	int x, y, z;

	x = 0;

	while (s[x] != '0')
		x++;
	y = x - 1;
	for (z = 0; y >= 0 && z < y; y--, z++)
	{
		p = s[z];
		s[z] = s[y];
		s[y] = p;
	}
}
