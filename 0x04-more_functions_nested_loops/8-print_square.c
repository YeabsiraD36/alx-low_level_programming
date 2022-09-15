#include "main.h"
/**
 * print_square - function that prints square followed by new line
 * @size: size of the square
 * Return:void
 */
void print_square(int size)
{
	int i, j;

	for (i = size; i > 0; i--)
	{
		for (j = size; j > 0; j--)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
