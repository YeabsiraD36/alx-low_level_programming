<<<<<<< HEAD
#include "main.h"

/**
 * _memset - function
 * @s: pointer to char params
 * @b: data to change
 * @n: index
 * Return: *s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
=======
#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: string array
 * @b: constant byte
 * @n: number of bytes
 * Return: pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
>>>>>>> 5b110fc615093e5e7d2187d76c5eae4be8c21380
