#include "main.h"

/**
 * _isdigit - function that checks for a digit (0 through 9).
 * @c: input value to check.
 * Return: int.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
		return (0);
}

