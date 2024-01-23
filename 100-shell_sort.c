#include "sort.h"

/**
 * int_swap - responsible for swapping two integers in an array.
 * @a: The first integer to swap.
 * @b: The second integer to swap.
 */
void int_swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * shell_sort - responsible for sorting an array of integers in ascending
 * order using the shell sort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 *
 * Description: Uses the Knuth interval sequence.
 */
void shell_sort(int *array, size_t size)
{
	size_t interval, k, j;

	if (array == NULL || size < 2)
		return;

	for (interval = 1; interval < (size / 3);)
		interval = interval * 3 + 1;

	for (; interval >= 1; interval /= 3)
	{
		for (k = interval; k < size; k++)
		{
			j = k;
			while (j >= interval && array[j - interval] > array[j])
			{
				int_swap(array + j, array + (j - interval));
				j -= interval;
			}
		}
		print_array(array, size);
	}
}
