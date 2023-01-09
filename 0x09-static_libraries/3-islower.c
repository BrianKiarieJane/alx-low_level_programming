#include "main.h"

/**
 * _islower - checks lowercase
 * @c:  char to check
 * Return: 1 if c is lowercase. Else 0 (success)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
	_putchar('\n');
}
