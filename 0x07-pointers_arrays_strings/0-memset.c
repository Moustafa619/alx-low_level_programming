#include "main.h"
#include <stdio.h>
/**
<<<<<<< HEAD
 * _memset - fill a block of memory with a specific value
 * @s: starting address of memory to be filled
 * @b: the desired value
 * @n: number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */
=======
* _memcpy - a function that copies memory area
* @dest: memory where is stored
* @src: memory where is copied
* *@n: number of bytes
*
* Return: copied memory with n byted changed
*/
>>>>>>> 1
char *_memset(char *s, char b, unsigned int n)

{
unsigned int i;

for (i = 0; i < n; i++)
{
*(s + i) = b;
}

return (s);
}
