#include "main.h"

/**
 * print_alphabet_x10 - function that prints 10 times the alphabet,
 * in lowercase
 * Return: nothing.
 */

void print_alphabet_x10(void)
{
	int l;
	int n = 0;

	while (n < 10)
	{
		l = 'a';
		while (l <= 'z')
		{
			_putchar(l);
			l += 1;
		}
		_putchar('\n');
		n += 1;
	}
}

