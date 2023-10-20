# C - SORTING ALGORITHMS & Big O

A Sorting Algorithm is used to rearrange a given array or list of elements according to a comparison operator on the elements. The comparison operator is used to decide the new order of elements in the respective data structure.

## TASKS
## Bubble sort (Files: `0-bubble_sort.c`, `0-O`)
A function that sorts an array of integers in ascending order using the Bubble sort algorithm

### Prototype: `void bubble_sort(int *array, size_t size);`

The array is printed after each time two elements are swapped.

The file `0-O` contains the big O notations of the time complexity of the Bubble sort algorithm, with 1 notation per line ordered in:

- in the best case
- in the average case
- in the worst case

## Insertion sort (Files: `1-insertion_sort_list.c`, `1-O`)

A function that sorts a doubly linked list of integers in ascending order using the Insertion sort algorithm.

### Prototype: `void insertion_sort_list(listint_t **list);`

The nodes are swapped if the current node's integer `n` is greater than the next, and then the list is printed after each time a swap occurs.

The file `1-O` contains the big O notations of the time complexity of the Insertion sort algorithm, with 1 notation per line:

- in the best case
- in the average case
- in the worst case

## Selection sort (Files: `2-selection_sort.c`, `2-O`)
A function that sorts an array of integers in ascending order using the Selection sort algorithm

### Prototype: `void selection_sort(int *array, size_t size);`

The array is printed after each time two elements are swapped.

The File `2-O` contains the big O notations of the time complexity of the Selection sort algorithm, with 1 notation per line:

- in the best case
- in the average case
- in the worst case

## Quick sort (Files: `3-quick_sort.c`, `3-O`)
A function that sorts an array of integers in ascending order using the Quick sort algorithm

### Prototype: `void quick_sort(int *array, size_t size);`

Implemented the Lomuto partition scheme.

The pivot is always the last element of the partition being sorted.

The array is printed after each time a swap occurs.

The file `3-O` contains the big O notations of the time complexity of the Quick sort algorithm, with 1 notation per line:

- in the best case
- in the average case
- in the worst case


