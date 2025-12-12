#include "sort.h"

/**
 * swap - Swaps two values in an array
 * @array: The array
 * @i: First index
 * @j: Second index
 */
void swap(int *array, int i, int j)
{
int tmp;

tmp = array[i];
array[i] = array[j];
array[j] = tmp;
}

/**
 * selection_sort - Sorts an array of integers using Selection sort
 * @array: Array to sort
 * @size: Size of the array
 */
void selection_sort(int *array, size_t size)
{
size_t i, j, min;

if (!array || size < 2)
return;

for (i = 0; i < size - 1; i++)
{
min = i;

for (j = i + 1; j < size; j++)
{
if (array[j] < array[min])
min = j;
}

if (min != i)
{
swap(array, i, min);
print_array(array, size);
}
}
}
