#include "main.h"

/**
 * _islower - function that checks for lowercase character.
 * @c: The input character to check
 * Return: int.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

