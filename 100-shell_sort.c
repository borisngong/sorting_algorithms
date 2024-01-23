#include "sort.h"

/**
 * shell_sort - responsible for sorting an array of integers
 * using Shell sort algorithm
 * @array: represents the array to be sorted
 * @size: represents the size of the array
 */

void shell_sort(int *array, size_t size)
{
	size_t gap = 1, i, j;
	int temp;

	while (gap < size / 3)
		gap = gap * 3 + 1;

	for (; gap > 0; gap /= 3)
	{
		for (i = gap; i < size; i++)
		{
			temp = array[i];

			for (j = i; j >= gap && array[j - gap] > temp; j -= gap)
			{
				array[j] = array[j - gap];
			}

			array[j] = temp;
		}

		for (i = 0; i < size; i++)
		{
			printf("%d", array[i]);
			if (i < size - 1)
				printf(", ");
		}
		printf("\n");
	}
}
