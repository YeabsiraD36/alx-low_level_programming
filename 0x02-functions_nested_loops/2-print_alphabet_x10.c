#include "main.h"
/**
 * print_alphabet_x10 - entry point
 * description: program that prints alphabet 10 times
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char alpha;
	int num;

	for (num = 0 ; num < 10 ; num++)
	{
		for (alpha = 'a' ; alpha <= 'z' ; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
	return (0);
}
