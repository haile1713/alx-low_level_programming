#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *alloc_grid - creates a 2D array and returns the pointer to the memory
 *
 *@width: width of the 2D array
 *@height: height of the 2D array
 *
 *Return: a pointer to the 2D array or NULL if the process fails
 */
int **alloc_grid(int width, int height)
{
	int **grid, i, j;

	if (width <= 2 || height <= 2)
	{
		return (NULL);
	}
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
		}
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
