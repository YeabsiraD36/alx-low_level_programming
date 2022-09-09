#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: a programm that list a-z except q and e
 * Return: Always 0(Success)
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
			putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
