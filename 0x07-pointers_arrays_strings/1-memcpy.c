#include "main.h"
/**
 * _memcpy - function that cpy memory area
 * @dest: memory area to be copied on
 * @src: memory area to be copied on dest
 * @n: number of bytes
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
