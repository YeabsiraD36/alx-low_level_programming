#include "main.h"
#include <stdio.h>
/**
 * _isupper - function that checks uppercase
 * @c: test subject
 * Return: 1 if its uppercase 0 is its not
 */
int _isupper(int c);
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
