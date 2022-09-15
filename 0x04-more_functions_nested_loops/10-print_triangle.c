#include "main.h"
/**
 * print_triangle - function that prints a triangle
 * @size: size of triangle
 * Return: 0
 */
void print_triangle(int size)
{
	int i, j, space;

	for (i = size; i > 0; i--)
	{
		for (space = (i - 1); space > 0; space--)
		{
			_putchar(' ');
		}
		for (j = i; j <= size; j++)
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
