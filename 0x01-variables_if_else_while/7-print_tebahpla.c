#include<stdio.h>
/**
 * main - Entry
 * Return: Alwyas 0(Success)
*/
int main(void)
{
	char rev;

	for (rev = 'z'; rev > 'a'; rev--)
		putchar(rev);

	putchar('\n');
	return (0);
}
