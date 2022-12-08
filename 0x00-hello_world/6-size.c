#include<stdio.h>
/**
 * main-print sizes of different data sets
 * data set order-char,int,long int,long long int,float
 * return :0
*/
int main(void)
{
	printf("Size of char: %zu bytes\n", sizeof(char));
	printf("Size of int: %zu bytes\n", sizeof(int));
	printf("Size of long: %zu bytes\n", sizeof(long));
	printf("Size of long long: %zu bytes\n", sizeof(long long));
	printf("Size of float: %zu bytes\n", sizeof(float));
	return (0);
}
