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
