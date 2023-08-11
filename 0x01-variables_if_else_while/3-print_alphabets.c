#include<stdio.h>
/**
 * main - print alphabet in lower case followed by upper
 * Return: Always 0
 */
int main(void)
{
	char x = 'a';
	char y = 'A';

	while (x <= 'z')
		putchar (x);
		x++;

	while (y <= 'Z')
		putchar (y);
		y++;

	putchar ('\n');
	return (0);
}
