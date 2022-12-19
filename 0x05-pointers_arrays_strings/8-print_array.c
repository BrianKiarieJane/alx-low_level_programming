#include "main.h"
#include <stdio.h>
/**
 * print_array - prints array
 * @a: pointer
 * @n: int
 * Return: 0
 */
void print_array(int *a, int n)
{
	int y;

	y = 0;

	while (y < n)
	{
		if (y != n - 1)
		{
			printf("%d, ", a[x]);
		}
		else
		{
			printf("%d", a[x]);
		}
		y++;
	}
	printf('\n');
