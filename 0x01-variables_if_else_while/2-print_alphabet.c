#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: a program that lists a-z lowercase
 * Return: Always 0(Success)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
