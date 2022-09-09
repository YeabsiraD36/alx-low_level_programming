#include <stdio.h>
#include <stdlib.h>

/**
 * main -Entry point
 * Description: a programm list a-z in lowercase then uppercase
 * Return: Always 0(Success)
 */
int main(void)
{
	char c = 'a';
	char d = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (d <= 'Z')
	{
		putchar(d);
		d++;
	}
	putchar('\n');
	return (0);
}
