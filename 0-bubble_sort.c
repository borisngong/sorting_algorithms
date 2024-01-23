#include "sort.h"

/**
 * int_swap - responsible for swapping two integers in an array.
 * @a: represents the first integer to swap.
 * @b: represents the second integer to swap.
 */
void int_sawap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * bubble_sort - responsble for sorting an array of integers in ascending order
 * @array: represents an array of integers to sort.
 * @size: represnts the size of the array.
 *
 * Description: After each pass the array is printed
 * Return: Always void
 */
void bubble_sort(int *array, size_t size)
{
	size_t k;
	size_t longii = size;
	bool swap = false;

	if (array == NULL || size < 2)
		return;

	while (swap == false)
	{
		swap = true;
		for (k = 0; k < longii - 1; k++)
		{
			if (array[k] > array[k + 1])
			{
				int_sawap(array + k, array + k + 1);
				print_array(array, size);
				swap = false;
			}
		}
		longii--;
	}
}