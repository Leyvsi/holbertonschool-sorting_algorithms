#include "sort.h"

/**
 * swap_elements - Swaps the values of two integers.
 *
 * @a: Pointer to the first integer.
 * @b: Pointer to the second integer.
 * Return: Nothing.
 */
void swap_elements(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * bubble_sort - Sorts an array of integers in ascending order.
 *
 * @array: The array of integers.
 * @size: The size of the array.
 * Return: Nothing.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int swapped;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		swapped = 0;

		for (j = 0; j < size - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap_elements(&array[j], &array[j + 1]);
				swapped = 1;

				/* Required action: Print array after each swap */
				print_array((const int *)array, size);
			}
		}

		if (swapped == 0)
			break;
	}
}
