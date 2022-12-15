#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms
 * Return: Always 0 (success)
 */
int main(void)
{
	long f1;
	long f2;
	long sum;
	float total;

	f1 = 1;
	f2 = 2;

	while (sum <= 4000000)
	{
		sum = f1 + f2;

		if ((f1 % 2) == 0)
			total += f1;
		f1 = f2;
		f2 = sum;
	}
	printf("%f\n", total);
	return (0);
}
