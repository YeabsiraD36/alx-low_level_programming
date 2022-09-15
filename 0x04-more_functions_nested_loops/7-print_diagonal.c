#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - function that draw diagonal line
 * @n: number of times \ should be printed
 * Return:void
 */
void print_diagonal(int n)
{
	int c, space;

	for (c = n; c > 0; c--)
	{
		for (space = c; space <= n; space++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
