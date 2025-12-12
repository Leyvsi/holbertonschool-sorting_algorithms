#include "sort.h"

/**
 * swap - Swaps two values
 * @array: The array
 * @i: Index 1
 * @j: Index 2
 */
void swap(int *array, int i, int j)
{
int tmp;

tmp = array[i];
array[i] = array[j];
array[j] = tmp;
}

/**
 * lomuto_partition - Lomuto partition scheme
 * @array: The array
 * @low: Start index
 * @high: End index
 * @size: Size for printing
 * Return: Pivot index
 */
int lomuto_partition(int *array, int low, int high, size_t size)
{
int pivot, i, j;

pivot = array[high];
i = low;

for (j = low; j < high; j++)
{
if (array[j] < pivot)
{
if (i != j)
{
swap(array, i, j);
print_array(array, size);
}
i++;
}
}

if (i != high)
{
swap(array, i, high);
print_array(array, size);
}

return (i);
}

/**
 * quick_rec - Recursively sorts array with Quick sort
 * @array: The array
 * @low: Start index
 * @high: End index
 * @size: Size for printing
 */
void quick_rec(int *array, int low, int high, size_t size)
{
int p;

if (low < high)
{
p = lomuto_partition(array, low, high, size);
quick_rec(array, low, p - 1, size);
quick_rec(array, p + 1, high, size);
}
}

/**
 * quick_sort - Sorts an array of integers using Quick sort
 * @array: The array to sort
 * @size: The size of the array
 */
void quick_sort(int *array, size_t size)
{
if (!array || size < 2)
return;

quick_rec(array, 0, size - 1, size);
}
