#include "sort.h"

/**
 * siftDown - Function that sifts down an element in a heap
 * @array: The array of numbers
 * @size: Size of the array
 * @root: The root containing the maximum element
 * @s_copy: Size copy
 *
 * Return: Nothing
 */
void siftDown(int *array, size_t size, size_t root, size_t s_copy)
{
	size_t largest = root;
	size_t left = 2 * root + 1;
	size_t right = 2 * root + 2;
	int temp;

	/* If left child is larger than root */
	if (left < size && array[left] > array[largest])
		largest = left;

	/* If right child is larger than the largest so far */
	if (right < size && array[right] > array[largest])
		largest = right;

	/* If the largest is not the root */
	if (largest != root)
	{
		/* Swap the largest element with the root */
		temp = array[root];
		array[root] = array[largest];
		array[largest] = temp;
		print_array(array, s_copy);

		/* Recursively sift down the affected sub-tree */
		siftDown(array, size, largest, s_copy);
	}
}

/**
 * heap_sort - Function performs Heapsort algorithm on an array
 *			using the sift-down operation
 * @array: The array
 * @size: Size of the array
 *
 * Return: Nothing
 */
void heap_sort(int *array, size_t size)
{
	int i, temp;

	for (i = size / 2 - 1; i >= 0; i--)
		siftDown(array, size, i, size);

	/* Extract elements from the heap one by one */
	for (i = size - 1; i > 0; i--)
	{
		/* Move the current root (maximum element) to the end */
		temp = array[0];
		array[0] = array[i];
		array[i] = temp;
		print_array(array, size);

		siftDown(array, i, 0, size);
	}
}
