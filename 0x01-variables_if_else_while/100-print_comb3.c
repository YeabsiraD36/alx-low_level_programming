#include <stdio.h>
/**
 * main - Entry point
 * description: a programm that prints 2 digit numbers
 * Return: Always 0(success)
 */
int main(void)
{
	int a = 0;
	int b = 0;

	while (a < 10)
	{
		++b;
		while (b < 10)
		{
			putchar(a + '0');
			putchar(b + '0');
			putchar(',');
			putchar(' ');
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
