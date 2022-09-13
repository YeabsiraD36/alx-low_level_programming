#include <stdio.h>
/**
 * print_alphabet - Entry point
 * Description: a program display alphabet in lower case
 * Return: 0
 */
void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a' ; alphabet <= 'z' ; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
