#include <stdio.h>

/**
* swap_int - swaps the values of two integers.
*@a: the first integer
*@b: the second integar
*this function is swapping every number it gets
* Return: Always 0.
*/
void swap_int(int *a, int *b)

{
int temp = *a;
*a = *b;
*b = temp;
}
