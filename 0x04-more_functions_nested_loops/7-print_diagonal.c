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

	for (c = 0; c < n; c++)
	{
		for (space = 0; space <= c; space++)
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
