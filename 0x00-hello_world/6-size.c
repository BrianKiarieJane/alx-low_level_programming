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

	printf("Size of char: %i byte(s)\n", sizeof(m));
	printf("Size of int: %i byte(s)\n", sizeof(n));
	printf("Size of long int: %i byte(s)\n", sizeof(o));
	printf("Size of long long int: %i byte(s)\n", sizeof(p));
	printf("Size of float: %i byte(s)\n", sizeof(q));
	return (0);
}
