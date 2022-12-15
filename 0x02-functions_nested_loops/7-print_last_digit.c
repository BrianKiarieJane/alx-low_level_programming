#include "main.h"

/**
 *print_last_digit - prints last digit
 *@n: int
 *Return: value of last digit
 */
int print_last_digit(int n)
{
	int x;

	x = n % 10;
	if (x < 0)
	{
		_putchar(-x + n);
		return (-x);
	}
	else
	{
		_putchar(x + n);
		return (x);
	}
}
