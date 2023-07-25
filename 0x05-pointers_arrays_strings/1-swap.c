#include <stdio.h>
/*
* swap_int- that swaps the values of two integers.
*@a: the first integer
*@b: the second integar
* Return: Always 0.
*/
void swap_int(int *a, int *b)
/*swiping the numbers*/
{
int temp = *a;
*a = *b;
*b = temp;
}
