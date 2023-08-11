#include<stdio.h>
/**
 * main - print all single digits of base 10 starting from 0
 * Return: Always 0
 */
int main(void)
{
	int start;

	for (start = 0; start < 10; start++)
		printf("%d", start);
	putchar ('\n');
	return (0);
}
