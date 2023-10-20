#include "sort.h"

/**
 * bubble_sort - Sorts an array in ascending order using
 *				the bubble sort algorithm
 * @array: The array to be sorted
 * @size: size of the array
 *
 * Return: Nothing
*/
void bubble_sort(int *array, size_t size)
{
	size_t i, k;
	int temp, swap_count = 0;

	for (i = 0; i < size; i++)
	{
		for (k = 0; k < (size - i - 1); k++)
		{
			if (array[k] > array[k + 1])
			{
				temp = array[k];
				array[k] = array[k + 1];
				array[k + 1] = temp;

				print_array(array, size);
				swap_count++;
			}
		}
		if (swap_count == 0)
			break;
	}
}
