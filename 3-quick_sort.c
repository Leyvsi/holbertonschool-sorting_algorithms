#include "sort.h"

void quick_sort(int *array, size_t size)
{
if (array == NULL || size < 2)
return;
quick_recursion(array, 0, size - 1, size);
}

void quick_recursion(int *array, int low, int high, size_t size)
{
int p;

if (low < high)
{
p = lomuto_partition(array, low, high, size);
quick_recursion(array, low, p - 1, size);
quick_recursion(array, p + 1, high, size);
}
}

int lomuto_partition(int *array, int low, int high, size_t size)
{
int pivot = array[high];
int i = low;
int temp;
int j;

for (j = low; j < high; j++)
{
if (array[j] < pivot)
{
if (i != j)
{
temp = array[i];
array[i] = array[j];
array[j] = temp;
print_array(array, size);
}
i++;
}
}

if (i != high)
{
temp = array[i];
array[i] = array[high];
array[high] = temp;
print_array(array, size);
}

return i;
}
