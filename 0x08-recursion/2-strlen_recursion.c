#include "main.h"
/**
 * _strlen_recursion - length of string
 * @s:string
 * Return:int
 */
int _strlen_recursion(char *s)
{
	int x;
	
	if (*s != '\0')
	{
		x = 1;
		_strlen_recursion(s + 1);
		x++;
	}
	return (x);
}
