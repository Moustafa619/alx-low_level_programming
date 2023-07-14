i#include <stdio>
/**
* main - Entry point
*
* Return: 0 on success
*/
int main(void)
{
printf("Size of char: %zu bytes\n", sizeof(char));
printf("Size of an int: %zu bytes\n", sizeof(int));
printf("Size of a long int: %zu bytes\n", sizeof(long));
printf("Size of a long long int: %zu bytes\n", sizeof(long long));
printf("Size of a float: %zu bytes\n", sizeof(float));
return (0);
}
