#include <stdio.h>
/**
 * main - Entry point
 * description: a program that prints all possible combinations
 * of two two-digit numbers
 * Return: Always 0(Success)
 */
int main(void)
{
	int a = 0;
	int b;

	while (a < 100)
	{
		b = a;
		while (b < 100)
		{
			if (a != b)
			{
				putchar(a / 10 + '0');
				putchar(a % 10 + '0');
				putchar(' ');
				putchar(b / 10 + '0');
				putchar(b % 10 + '0');
				if (a * 100 + b != 9899)
				{
					putchar(',');
					putchar(' ');
				}
				else
					;
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
