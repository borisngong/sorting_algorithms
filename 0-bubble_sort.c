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
 * bubble_sort - responsble for sorting an array of ints in ascending order
 * @array: represents an array of integers to sort.
 * @size: represnts the size of the array.
 *
* Description: Prints the array after each time two elements are swapped.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, len = size;
	bool swap = false;

	if (array == NULL || size < 2)
		return;

	while (swap == false)
	{
		swap = true;
		for (i = 0; i < len - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				int_swap(array + i, array + i + 1);
				print_array(array, size);
				swap = false;
			}
		}
		len--;
	}
}
