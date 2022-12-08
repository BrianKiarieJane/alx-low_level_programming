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
	long int y;
	long long int z;
	float a;

	printf("Size of char: %ld byte(S)\n", sizeof(w));
	printf("Size of int: %ld byte(S)\n", sizeof(x));
	printf("Size of long int: %ld byte(S)\n", sizeof(y));
	printf("Size of long long int: %ld byte(S)\n", sizeof(z));
	printf("Size of float: %ld byte(S)\n", sizeof(a));
	return (0);
}
