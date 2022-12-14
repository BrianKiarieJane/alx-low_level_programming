#include "main.h"
/**
 * _isalpha - checks alphabetic character
 * @c: char to check
 * Return: 1 if c is letter, else 0 (success)
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
	_putchar ('\n');
}
