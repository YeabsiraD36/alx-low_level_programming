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
		n = -n;
		a = n % 10;
	if (a < 0)
		a = -a;
	_putchar(a + '0');
	return (a);
}
