#include "main.h"
/**
*swap_int - swap fn
*@a: int
*@b: int
* @*a: pointers
* @*b: pointer
* Return: 0(Success)
*/
void swap_int(int *a, int *b)
{
	int k;

	k = *a;
	*a = *b;
	*b = k;
}
