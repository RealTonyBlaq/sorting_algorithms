#include "sort.h"
/**
 * selection_sort - function that sorts an array
 * of integers in ascending order
 * using the Selection sort algorithm
 * @array: The array to be sorted
 * @size: The size of the array
 * Return: Nothing
 */
void selection_sort(int *array, size_t size)
{
	size_t x, y, m_index;
	int temp;

	for (x = 0; x < size - 1; x++)
	{
		m_index = x;
		for (y = x + 1; y < size; y++)
		{
			if (array[y] < array[m_index])
			{
				m_index = y;
			}
		}
		if (m_index != x)
		{
			temp = array[m_index];
			array[m_index] = array[x];
			array[x] = temp;
			print_array(array, size);
		}
	}
}
