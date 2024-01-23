#include "sort.h"

/**
 * int_swap - responsible for swapping two integers in an array.
 * @a: represents the first integer to swap.
 * @b: represents the second integer to swap.
 */
void int_swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * selection_sort - Sort an array of integers in ascending
 * order using Selection sort.
 * @array: The array of integers to sort.
 * @size: The size of the array.
 *
 * Description: Prints the array after each time two elements are swapped.
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min_idx;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min_idx = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_idx])
				min_idx = j;
		}

		if (min_idx != i)
		{
			int_swap(&array[i], &array[min_idx]);
			print_array(array, size);
		}
	}
}
