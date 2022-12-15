#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * Return: Always 0 (success)
 */
int main(void)
{
	int x;
	long f1;
	long f2;
	long sum;

	for (x = 0; x < 48; x++)
	{
		sum = f1 + f2;
		printf(", %lu", sum);
		f1 = f2;
		f2 = sum;
	}
	printf("\n");
	return (0);
}
