#include "main.h"
/**
 * print_line - function that prints line
 * @n: number of _
 * Return: 0
 */
void print_line(int n)
{
	int a;

	for (a = n; a > 0; a--)
	{
		_putchar('_');
	}
	_putchar('\n');
}
