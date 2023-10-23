#include "sort.h"
/**
 * merge_array - Function that sort array of integer
 * @arr: an array of integer
 * @sorted: to store the sorted array
 * @right: the front index of the array
 * @mid: The middle index of array
 * @left: The first index of array
 * Return: Nothing
 */
void merge_array(int *arr, int *sorted, size_t right, size_t mid, size_t left)
{
	size_t x, y, z = 0;

	printf("Merging...\n[left]: ");
	print_array(arr + right, (mid - right));

	printf("[right]: ");
	print_array(arr + mid, (left - mid));

	for (x = right, y = mid; x < mid && y < left; z++)
		sorted[z] = (arr[x] < arr[y]) ? arr[x++] : arr[y++];
	for (; x < mid; x++)
		sorted[z++] = arr[x];
	for (; y < left; y++)
		sorted[z++] = arr[y];
	for (x = right, z = 0; x < left; x++)
		arr[x] = sorted[z++];

	printf("[Done]: ");
	print_array(arr + right, (left - right));
}
/**
 * recursive_merge_sort - Function that implement through
 * recursion.
 * @arr: Array to be sorted
 * @sorted: to store the sorted array
 * @right: The max index of the array
 * @left: The first index
 * Return: Nothing
 */
void recursive_merge_sort(int *arr, int *sorted, size_t right, size_t left)
{
	size_t mid;

	if (left - right > 1)
	{
		mid = right + (left - right) / 2;
		recursive_merge_sort(arr, sorted, right, mid);
		recursive_merge_sort(arr, sorted, mid, left);
		merge_array(arr, sorted, right, mid, left);
	}
}
/**
 * merge_sort -  function that sorts an array of integers
 * in ascending order using the Merge sort algorithm.
 * @array: The array to be sorted.
 * @size: size of the array
 * Return: Nothing
 */
void merge_sort(int *array, size_t size)
{
	int *sorted;

	if (array == NULL || size < 2)
		return;

	sorted = malloc(sizeof(int) * size);
	if (sorted == NULL)
		return;

	recursive_merge_sort(array, sorted, 0, size);

	free(sorted);
}
