#include "sort.h"
/**
 * get_max - Function that get the maximum value of
 * the array of integer.
 * @array: The array
 * @size: The size of the array
 * Return: The maximum integer.
 */
int get_max(int *array, int size)
{
	int max, x;

	for (max = array[0], x = 1; x < size; x++)
	{
		if (array[x] > max)
			max = array[x];
	}
	return (max);
}
/**
 * radix_counting_sort - function that sorts the significant
 * digit of the array of integers.
 * @arr: the array of integer
 * @size: The size of the array
 * @signi: The significant digit to sort on
 * @sorted: Store the sorted array
 * Return: Nothing
 */
void radix_counting_sort(int *arr, size_t size, int signi, int *sorted)
{
	int count[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	size_t i;

	for (i = 0; i < size; i++)
		count[(arr[i] / signi) % 10] += 1;
	for (i = 0; i < 10; i++)
		count[i] += count[i - 1];
	for (i = size - 1; (int)i >= 0; i--)
	{
		sorted[count[(arr[i] / signi) % 10] - 1] = arr[i];
		count[(arr[i] / signi) % 10] -= 1;
	}
	for (i = 0; i < size; i++)
		array[i] = sorted[i];
}
/**
 * radix_sort - function that sorts an array of integers
 * in ascending order using the Radix sort algorithm
 * @array: The array to be sorted
 * @size: size of the array
 * Return:Nothing
 */
void radix_sort(int *array, size_t size)
{
	int max, signi;
	int *sorted;

	if (array == NULL || size < 2)
		return;
	sorted = malloc(sizeof(int) * size);
	if (sorted == NULL)
		return;
	max = get_max(array, size);
	for (signi = 1; max / signi > 0; signi *= 10)
	{
		radix_counting_sort(array, size, signi, sorted);
		print_array(array, size);
	}
	free(sorted);
}
