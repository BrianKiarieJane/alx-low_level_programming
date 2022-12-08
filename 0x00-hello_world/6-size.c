#include<stdio.h>
/**
 * main -print sizes of different data sets
 * data set order-char,int,long int,long long int,float
 * Return:0
*/
int main(void)
{
	char w;
	int x;
	long y;
	long long int z;
	float a;

	printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(w));
	printf("Size of int: %lu byte(s)\n", (unsigned long)sizeof(x));
	printf("Size of long: %lu byte(s)\n", (unsigned long)sizeof(y));
	printf("Size of long long: %lu byte(s)\n", (unsigned long)sizeof(z));
	printf("Size of float: %lu byte(s)\n", (unsigned long)sizeof(a));
	return (0);
}
