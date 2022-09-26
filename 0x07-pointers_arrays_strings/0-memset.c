<<<<<<< HEAD
#include "main.h"
/**
 * _memset - function that fills memory with constant byte
 *@s: pointer to memory area
 *@b: constant byte
 *@n: bytes of memory area pointed by s
 * Return: pointe to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n ; i++)
	{
		s[i] = b;
	}
	return (s);
}
=======
#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: memory area
 * @b: constant byte
 * @n: bytes of the memory area
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *mem = s;

	while (n--)
		*s++ = b;
	return (mem);
}
>>>>>>> 0c82ca259bb963b374609aacd488e2d8e462093c
