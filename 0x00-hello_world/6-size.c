#include<stdio.h>
/**
 * main -print sizes of different data sets
 * data set order-char,int,long int,long long int,float
 * Return:0
*/
int main(void)
{
	printf("Size of char: %d byte(S)\n", sizeof(char));
	printf("Size of int: %d byte(S)\n", sizeof(int));
	printf("Size of long int: %d byte(S)\n", sizeof(long int));
	printf("Size of long long int: %d byte(S)\n", sizeof(long long int));
	printf("Size of float: %d byte(S)\n", sizeof(float));
	return (0);
}
