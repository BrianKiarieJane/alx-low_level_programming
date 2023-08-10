#include<stdio.h>
/**
 * main- program that prints output
 * Return: always 0
 */
int main(void)
{
	long long int k;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %ld byte(s)\n", sizeof(long int));
	printf("Size of long long int: %lu byte(s)\n", (unsigned long)sizeof(k));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(float));
	return (0);
}
