# C - SORTING ALGORITHMS & Big O

A Sorting Algorithm is used to rearrange a given array or list of elements according to a comparison operator on the elements. The comparison operator is used to decide the new order of elements in the respective data structure.

### `sort.h` is the header file containing all function prototypes for this project.

## TASKS
## Bubble Sort (Files: `0-bubble_sort.c`, `0-O`)
A function that sorts an array of integers in ascending order using the Bubble sort algorithm

### Prototype: `void bubble_sort(int *array, size_t size);`

The array is printed after each time two elements are swapped.

The file `0-O` contains the big O notations of the time complexity of the Bubble sort algorithm, with 1 notation per line ordered in:

- in the best case
- in the average case
- in the worst case

## Insertion Sort (Files: `1-insertion_sort_list.c`, `1-O`)

A function that sorts a doubly linked list of integers in ascending order using the Insertion sort algorithm.

### Prototype: `void insertion_sort_list(listint_t **list);`

The nodes are swapped if the current node's integer `n` is greater than the next, and then the list is printed after each time a swap occurs.

The file `1-O` contains the big O notations of the time complexity of the Insertion sort algorithm, with 1 notation per line:

- in the best case
- in the average case
- in the worst case

## Selection Sort (Files: `2-selection_sort.c`, `2-O`)
A function that sorts an array of integers in ascending order using the Selection sort algorithm

### Prototype: `void selection_sort(int *array, size_t size);`

The array is printed after each time two elements are swapped.

The File `2-O` contains the big O notations of the time complexity of the Selection sort algorithm, with 1 notation per line:

- in the best case
- in the average case
- in the worst case

## Quick Sort (Files: `3-quick_sort.c`, `3-O`)
A function that sorts an array of integers in ascending order using the Quick sort algorithm

### Prototype: `void quick_sort(int *array, size_t size);`

Implemented the Lomuto partition scheme.

The pivot is always the last element of the partition being sorted.

The array is printed after each time a swap occurs.

The file `3-O` contains the big O notations of the time complexity of the Quick sort algorithm, with 1 notation per line:

- in the best case
- in the average case
- in the worst case

## Shell Sort (File: `100-shell_sort.c`)
A function that sorts an array of integers in ascending order using the Shell sort algorithm, using the Knuth sequence

### Prototype: `void shell_sort(int *array, size_t size);`
The following sequence of intervals was used (a.k.a the Knuth sequence):
`n+1 = n * 3 + 1`

`1, 4, 13, 40, 121, ...`

The array is printed each time the interval decreases.

The shell sort algorithm doesn't have any Big O notation because it's time complexity depends on the size of the array and gap.

## Cocktail Shaker Sort (Files: `101-cocktail_sort_list.c, 101-O`)

A function that sorts a doubly linked list of integers in ascending order using the Cocktail shaker sort algorithm.

### Prototype: `void cocktail_sort_list(listint_t **list);`

The list is printed after each swap two elements.

File `101-O`, a text file, contains the big O notations of the time complexity of the Cocktail shaker sort algorithm, with 1 notation per line:

- in the best case
- in the average case
- in the worst case

## Counting Sort (Files: `102-counting_sort.c, 102-O`)

A function that sorts an array of integers in ascending order using the Counting sort algorithm.

### Prototype: `void counting_sort(int *array, size_t size);`

It is assumed that array will contain only numbers >= 0

The counting array is printed once it is set up.
This array is of size `k + 1` where `k` is the largest number in array

File `102-O` holds the big O notations of the time complexity of the Counting sort algorithm, with 1 notation per line:

- in the best case
- in the average case
- in the worst case

## Merge Sort (Files: `103-merge_sort.c, 103-O`)

A function that sorts an array of integers in ascending order using the Merge sort algorithm.

### Prototype: `void merge_sort(int *array, size_t size);`

The top-down merge sort algorithm was implemented.
When you divide an array into two sub-arrays, the size of the left array is <= the size of the right array. i.e. `{1, 2, 3, 4, 5} -> {1, 2}, {3, 4, 5}`
The left array is sorted before the right array

File `103-O` holds the big O notations of the time complexity of the Merge sort algorithm, with 1 notation per line:

- in the best case
- in the average case
- in the worst case

## Heap Sort (Files: `104-heap_sort.c, 104-O`)

A function that sorts an array of integers in ascending order using the Heap sort algorithm.

### Prototype: `void heap_sort(int *array, size_t size);`

The sift-down heap sort algorithm was implemented.
The array is printed after each swap.

The file `104-O` holds the big O notations of the time complexity of the Heap sort algorithm, with 1 notation per line:

- in the best case
- in the average case
- in the worst case

## Radix Sort (File: `105-radix_sort.c`)

A function that sorts an array of integers in ascending order using the Radix sort algorithm.

### Prototype: `void radix_sort(int *array, size_t size);`

The LSD radix sort algorithm was implemented and it was assumed that the array will contain only numbers >= 0. Once the significant digit increases, the array is printed.


## Quick Sort - Hoare Partition (Files: `107-quick_sort_hoare.c, 107-O`)

A function that sorts an array of integers in ascending order using the Quick sort algorithm and implementing the Hoare Partition scheme. The pivot is always the last element of the partition being sorted and the array is printed after each swap.

### Prototype: `void quick_sort_hoare(int *array, size_t size);`


File `107-O` holds the big O notations of the time complexity of the Quick sort algorithm, with 1 notation per line:

- in the best case
- in the average case
- in the worst case
