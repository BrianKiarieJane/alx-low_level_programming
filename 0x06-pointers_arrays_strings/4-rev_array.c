#include "main.h"
/**
 * reverse_array - rev arr
 * @a: int
 * @n: int
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int x, y, z;

	for (x = 0; x < n - 1; X++)
	{
		for (y = 1; y > 0; y--)
		{
			z = *(a + y);
			*(a + y) = *(a + (y - 1));
			*(a + (y - 1)) = z;
		}
	}
}
