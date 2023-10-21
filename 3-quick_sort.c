#include "sort.h"

/**
 * quickSort - function that sort the array
 * @arr: The array to be sorted
 * @low: lowest index notation of the array
 * @high: Highest index notation of the array
 * Return: Nothing
 */
void quickSort(int arr[], int low, int high)
{
	int partition_index;

	if (low >= high || low < 0)
		return;
	partition_index = partition(arr, low, high);
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
