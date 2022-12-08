#include <stdio.h>
/**
 * main- prints the size of various types
 * Return: 0
*/
int main(void)
{
	float e;
	char a;
	int b;
	long int c;
	long long int d;

	printf("Size of char: %ld byte(s)\n", sizeof(a));
	printf("Size of int: %ld byte(s)\n", sizeof(b));
	printf("Size of long int: %ld byte(s)\n", sizeof(c));
	printf("Size of long long int: %ld byte(s)\n", sizeof(d));
	printf("Size of float: %ld byte(s)\n", sizeof(e));
	return (0);
}
