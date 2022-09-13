#include "main.h"
/**
 * print_last_digit - returns last digit
 * @n: test subject
 * Return: void.
 */
int print_last_digit(int n)
{
	int y;

	if (n < 0)
	{
		n = -n;
		y = n % 10;
	if (y < 0)
	{
		y = -y;
	}
	_putchar(y + '0');
	}
	return (y);
}
