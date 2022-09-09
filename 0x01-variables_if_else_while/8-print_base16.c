#include <stdio.h>
/**
 * main - Entry point
 * Description: a programm that lists 0-9 and a-f
 * Return: Always 0(success)
 */
int main(void)
{
	int a = 0;
	char b = a;

	while (a < 10)
	{
		putchar(a + '0');
		a++;
	}
	while (b < 'g')
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
