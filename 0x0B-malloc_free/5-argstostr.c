#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *argstostr - concatenates all the arguments of the program
 *char
 *
 *@ac: argument count
 *@av: argument vector
 *
 *Return: a pointer to the concatenated array or NULL if the process fails
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0, length = 0;
	char *p;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			length++;
		}
		length++;
	}
	length++;
	p = malloc(sizeof(char) * length);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != 0; j++)
		{
			p[k] = av[i][j];
			k++;
		}
		p[k] = 10;
		k++;
	}
	p[k] = 0;
	return (p);
}
