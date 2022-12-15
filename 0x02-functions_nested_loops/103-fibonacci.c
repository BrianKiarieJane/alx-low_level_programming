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

	f1 = 0;
	f2 = 1;

	while (1)
	{
		sum = f1 + f2;

		if (sum > 4000000)
			break;

		if ((sum % 2) == 0)
			total += sum;
		f1 = f2;
		f2 = sum;
	}
	printf("%f\n", total);
	return (0);
}
