<<<<<<< HEAD
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
=======
#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to be copied
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *mem = dest;

	while (n--)
		*dest++ = *src++;
	return (mem);
}
>>>>>>> 0c82ca259bb963b374609aacd488e2d8e462093c
