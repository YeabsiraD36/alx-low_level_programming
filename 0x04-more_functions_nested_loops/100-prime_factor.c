#include <stdio.h>
/**
 * main - entry point
 *Description: program that prints the largest prime factor
 * Return:0
 */
int main(void)
{
	long int f;
	long int x = 612852475143;

	for (f = 2; f < x; f++)
	{
		if (x % f == 0)
		{
			x = x / f;
		}
	}
	printf("%ld\n", f);
	return (0);
}
