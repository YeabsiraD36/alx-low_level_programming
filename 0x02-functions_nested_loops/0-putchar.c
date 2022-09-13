#include "main.h"
/**
 * main - Entry point
 * Description: program that prints _putchar
 * Return: 0
 */
int main(void)
{
	char print[] = "_putchar";
	
	int num;

	for (num = 0 ; num <= 7 ; num++)
	{
		_putchar(print[num]);
	}
	_putchar('\n');
}
