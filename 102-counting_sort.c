#include "sort.h"

/**
 * get_maximum - Function that get the maximum value
 * in an array of integer.
 * @array: An array of integer
 * @size: The size of the array
 * Return: The maximum integer in the array.
 */
int get_maximum(int *arr, int size)
{
	int max, i;

	for (max = arr[0], i = 1; i < size; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	return (max);
}
/**
 * counting_sort - unction that sorts an array of integers
 * in ascending order using the Counting sort algorithm
 * @array: The array to be sorted
 * @size: The size of the array
 * Return: Nothing
 */
void counting_sort(int *array, size_t size)
{
	int max, i;
	int *count, *sorted;

	if (array == NULL || size <= 1)
		return;
	sorted = malloc(sizeof(int) * size);
	if (sorted == NULL)
		return;
	max = get_maximum(array, size);
	count = malloc(sizeof(int) * (max + 1));
	if (count == NULL)
	{
		free(sorted);
		return;
	}
	for (i = 0; i < (max + 1); i++)
		count[i] = 0;
	for (i = 0; i < (int)size; i++)
		count[array[i]] += 1;
	for (i = 0; i < (max + 1); i++)
		count[i] += count[i - 1];
	print_array(count, max + 1);
	
	for (i = 0; i < (int)size; i++)
	{
		sorted[count[array[i]] - 1] = array[i];
		count[array[i]] -= 1;
	}
	for (i = 0; i < (int)size; i++)
		array[i] = sorted[i];

	free(sorted);
	free(count);
}
