#include "main.h"

/**
 * print_number - like a hello world
 *
 * @n:  an integer to display
 *
 * return: void
 */


void print_number(int n)
{
		unsigned int y = 0;

		if  (n < 0)
		{
			y = -n;
			_putchar('-');
		}

				else
				{
					y = n;
				}
					if (y / 10)
					{
						print_number(y / 10);
					}
					_putchar((y % 10) + '0');
}
