#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: list 0-9 separated b , and followed by space
 * Return: Always 0(Success)
 */
int main(void)
{
	int a = 0;

	while (a < 10)
	{
		putchar(a + '0');
		if (a != 9)
		{
			putchar(',');
			putchar(' ');
		}
		a++;
	}
	putchar('\n');
	return (0);
}
