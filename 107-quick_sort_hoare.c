#include "sort.h"

/**
 * quick_sort_hoare - Sorts an array using the quick sort
 *					algorithm and by implementing the
 *					Hoare partition scheme
 * @array: The array
 * @size: Size of the array
 * Return: Nothing
*/
void quick_sort_hoare(int *array, size_t size)
{
	if (!array || size < 2)
		return;

	hoare(array, size, 0, size - 1);
}

/**
 * hoare - Uses the Hoare partition scheme
 * @array: The array
 * @size: Size of the array
 * @low: Lower index of the array
 * @high: Higher index of the array
 *
 * Return: Nothing
 */
void hoare(int *array, size_t size, int low, int high)
{
	int partition_index;

	if (low < high)
	{
		partition_index = partition_scheme(array, size, low, high);
		hoare(array, size, low, partition_index - 1);
		hoare(array, size, partition_index, high);
	}
}

/**
 * partition_scheme - The Hoare partition
 * @array: The array
 * @size: Size of the array
 * @low: Lower index of the array
 * @high: Higher index of the array
 *
 * Return: An array index
 */
int partition_scheme(int *array, size_t size, int low, int high)
{
	int pivot = array[high];
	int i = low - 1, j = high + 1;

	while (1)
	{
		do {
			i++;
		} while (array[i] < pivot);

		do {
			j--;
		} while (array[j] > pivot);

		if (i >= j)
			return (i);

		swap_index(&array[i], &array[j]);
		print_array(array, size);
	}
}

/**
 * swap_index - Swaps the values of two array indexes
 * @index1: First index
 * @index2: Second index
 *
 * Return: Nothing
*/
void swap_index(int *index1, int *index2)
{
	int temp;

	temp = *index1;
	*index1 = *index2;
	*index2 = temp;
}
