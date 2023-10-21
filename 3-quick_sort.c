#include "sort.h"

/**
 * swap - function that swap the indexes of the array
 * @x: first index to the swap
 * @y: the second index to be swap
 * Return: Nothing
 */
void swap(int *x, int *y)
{
	int z;

	z = *x;
	*x = *y;
	*y = z;
}

/**
 * partition - function that choose the pivot
 * @arr: The array to be sorted
 * @low: the lowest index of array
 * @high: The highest index of array
 * Return: an integer value
 */
int partition(int arr[], int low, int high)
{
	int pivot, j, se_index; /*se_index - small element index*/

	pivot = arr[high];
	se_index = low - 1;

	for (j = low; j <= high; j++)
	{
		/*check if element if smaller than the pivot*/
		if (arr[j] < pivot)
		{
			/*increment index of smaller element*/
			se_index++;
			swap(&arr[se_index], &arr[j]);
			/*print_array(arr, high + 1);*/
		}
	}
	swap(&arr[se_index + 1], &arr[high]);
	print_array(arr, high + 1);
	return (se_index + 1);
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
void quick_sort(int *array, int size)
{
	if (array == NULL || size < 2)
	{
		return;
	}
	quickSort(array, 0, size - 1);
}
