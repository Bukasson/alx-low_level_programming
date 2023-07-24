#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers,
 * followed by a new line
 * @a: Pointer to the array of integers
 * @n: Number of elements to be printed
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1) /* Add comma and space for all elements except the last one */
			printf(", ");
	}

	printf("\n");
}
