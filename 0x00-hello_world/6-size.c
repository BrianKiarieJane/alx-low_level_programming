#include<stdio.h>
/**
 * main -print sizes of different data sets
 * data set order-char,int,long int,long long int,float
 * Return:0
*/
int main(void)
{
	char m;
	int n;
	long int o;
	long long int p;
	float q;

	printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(m));
	printf("Size of int: %lu byte(s)\n", (unsigned long)sizeof(n));
	printf("Size of long int: %lu byte(s)\n", (unsigned long)sizeof(o));
	printf("Size of long long int: %lu byte(s)\n", (unsigned long)sizeof(p));
	printf("Size of float: %lu byte(s)\n", (unsigned long)sizeof(q));
	return (0);
}
