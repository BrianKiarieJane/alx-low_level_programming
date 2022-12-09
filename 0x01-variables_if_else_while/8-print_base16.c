#include<stdio.h>
/**
 * main - Entry
 * Return: Always 0(Success)
*/
int main(void)
{
	char x;
	int y;

	for (y = 0; y < 10; y++)
		putchar((y % 10) + '0');
	for (x = 'a'; x <= 'f'; x++)
		putchar(x);

	putchar('\n');
	return (0);
}
