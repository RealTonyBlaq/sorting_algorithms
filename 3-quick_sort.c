#include "sort.h"

/**
 * partition - function that choose the pivot
 * @arr: The array to be sorted
 * @low: the lowest index of array
 * @high: The highest index of array
 * Return: an integer value
 */
int partition(int arr[], int low, int high)
{
	int pivot;

	pivot = arr(high);
}
/**
 * quickSort - function that sort the array
 * @arr: The array to be sorted
 * @low: lowest index notation of the array
 * @high: Highest index notation of the array
 * Return: Nothing
 */
void quickSort(int arr[], int low, int high)
{
	int p_index;

	if (low >= high || low < 0)
	{
		return;
	}
	if (low < high)
	{
		p_index = partition(arr, low, high);
		/*sort the left subarray*/
		quickSort(arr, low, p_index - 1);
		/*sort the right subarray*/
		quickSort(arr, p_index + 1, high);
	}
}

/**
 * quick_sort -  function that sorts an array of integers
 * in ascending order using the Quick sort algorithm
 * @array: The array to be sorted
 * @size: The size of the arry
 * Return: Nothing
 */
void quick_sort(int *array, size_t size)
{
	int low, high;

	low = 0;
	high = size - 1;

	if (size >= 0 || size < 0)
	{
		return;
	}
	quickSort(arr, low, high);
}
