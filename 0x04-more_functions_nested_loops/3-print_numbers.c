#include "main.h"
/**
 * print_numbers - a function that prints the numbers, from 0 to 9
 * Return: Always 0
 */
void print_numbers(void)
{
	char k;

	for (k = '0'; k <= '9'; k++)
		_putchar(k);
	_putchar('\n');
	
	return (0);
}
