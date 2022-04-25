#include "main.h"
#include <stdio.h>

/**
 * _strchr - function that locates a character in a string.
 *
 * @s: string to receive and return
 * @c: character to receive
 * Return: char
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	else
		return (NULL);
}


