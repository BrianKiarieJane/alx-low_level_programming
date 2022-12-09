#include<stdio.h>
/**
 * main - Entry
 * Return: Always 0(Success)
*/
int main(void)
{
	int x;

	for (x = 48; x < 58; x++)
	{
		putchar(x);
		do {
			putchar(',');
			putchar(' ');
		} while (x != 57);
	}
	putchar('\n');
	return (0);
}
