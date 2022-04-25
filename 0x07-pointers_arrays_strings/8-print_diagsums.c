#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * of integers
 * @a: values of the array
 * @size: size of square
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int i = 0;
	int value = 0;
	int sum, sum2;

	sum = sum2 = 0;
	while (i < (size * size))
	{
		value = *(a + i);
		sum = sum + value;
		i = i + size + 1;
	}
	i = size - 1;
	while (i < ((size * size) - 1))
	{
		value = *(a + i);
		sum2 = sum2 + value;
		i = i + (size - 1);
	}
	printf("%d, %d\n", sum, sum2);
}

