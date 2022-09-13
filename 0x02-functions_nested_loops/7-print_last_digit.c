#include "main.h"
/**
 * print_last_digit - returns last digit
 * @n: test subject
 * Return: void.
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
	_putchar((-n % 10) + '0');
		return (-n % 10);
	}
	_putchar((n % 10) + '0');
	return (n % 10);
}
