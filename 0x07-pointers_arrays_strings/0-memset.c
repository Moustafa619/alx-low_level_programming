#include "main.h"
#include <stdio.h>
/**
 * _memcpy - a function that copies memory area
 * @dest: memory where is stored
 * @src: memory where is copied
 * *@n: number of bytes
 *
 * Return: copied memory with n byted changed
 */
char *_memset(char *s, char b, unsigned int n)

{
unsigned int i;

for (i = 0; i < n; i++)
{
*(s + i) = b;
}

return (s);
}
