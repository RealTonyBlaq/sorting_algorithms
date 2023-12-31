#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void print_list(const listint_t *list);
void print_array(const int *array, size_t size);
void bubble_sort(int *array, size_t size);
void selection_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void quick_sort(int *array, size_t size);
void quickSort(int arr[], size_t size, int low, int high);
int partition(int arr[], size_t size, int low, int high);
void swap(int *x, int *y);
void shell_sort(int *array, size_t size);
void counting_sort(int *array, size_t size);
int get_maximum(int *arr, int size);
void cocktail_sort_list(listint_t **list);
int check_sorted(listint_t **list);
void merge_sort(int *array, size_t size);
void merge_array(int *arr, int *sorted, size_t right, size_t mid, size_t left);
void recursive_merge_sort(int *arr, int *sorted, size_t right, size_t left);
listint_t *head_swap(listint_t **list, listint_t *head);
listint_t *tail_swap(listint_t **list, listint_t *tail);
void heap_sort(int *array, size_t size);
void siftDown(int *array, size_t size, size_t root, size_t s_copy);
void radix_sort(int *array, size_t size);
int get_max(int *array, int size);
void radix_counting_sort(int *arr, size_t size, int signi, int *sorted);
void quick_sort_hoare(int *array, size_t size);
void hoare(int *array, size_t size, int low, int high);
int partition_scheme(int *array, size_t size, int low, int high);
void swap_index(int *index1, int *index2);

#endif /* SORT_H */
