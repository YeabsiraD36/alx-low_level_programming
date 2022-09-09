#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: a programm that list z-a
 * Return: Always 0(Success)
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
