#include "sort.h"
/**
 * counting_sort - unction that sorts an array of integers
 * in ascending order using the Counting sort algorithm
 * @array: The array to be sorted
 * @size: The size of the array
 * Return: Nothing
 */
void counting_sort(int *array, size_t size)
{
	int max, min;
	int *count;
	size_t i, range, j;

	if (size <= 1)
		return;
	max = array[0];
	min = array[0];
	/*Find the maximum and minimum value in the array*/
	for (i = 1; i < size; i++)
	{
		if (array[i] > max)
			max = array[i];
		if (array[i] < min)
			min = array[i];
	}
	/*calculate the range and create a counting array*/
	range = (size_t)(max - min) + 1;
	count = malloc(range * sizeof(int));
	if (count == NULL)
		return;
	/*Initialize the counting array with zero*/
	for (i = 0; i < size; i++)
		count[i] = 0;
	/*count the occurence of each element in the array*/
	for (i = 0; i < size; i++)
		count[array[i] - min]++;
	print_array(count, range);
	/*reconstruct the sorted array fromthe counting array*/
	j = 0;
	for (i = 0; i < range; i++)
	{
		while (count[i] > 0)
		{
			array[j] = (int)i + min;
			j++;
			count[i]--;
		}
	}
	free(count);
}
