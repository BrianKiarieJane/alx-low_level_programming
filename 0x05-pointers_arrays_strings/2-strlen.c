#include "main.h"
/**
*_strlen - length fn
*@s: int
*Return: x
*/
int _strlen(char *s)
{
	int x;

	x = 0;

	for (; *s++)
		x++;
	return (x);
}

