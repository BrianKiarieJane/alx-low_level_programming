#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 * Return: Always 0 (success)
 */
void times_table(void)
{
	int m, n, o;

	for (m = 0; m <= 9; m++)
	{
		_putchar('0');

		for (n = 1; n <= 9; n++)
		{
			_putchar(',');
			_putchar(' ');
			o = m * n;

			if (o <= 9)
				_putchar(' ');
			else
				_putchar((o / 10) + '0');
			_putchar((o % 10) + '0');
		}
		_putchar('\n');
	}
}
