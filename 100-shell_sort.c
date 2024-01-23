#include "sort.h"

/**
 * shell_sort - responsible for sorting an array of integers
 * using Shell sort algorithm
 * @array: represents the array to be sorted
 * @size: represents the size of the array
 */

void shell_sort(int *array, size_t size)
{
	size_t interval = 1, i, j;
	int temp;

	while (interval < size / 3)
		interval = interval * 3 + 1;

	while (interval > 0)
	{
		for (i = interval; i < size; i++)
		{
			temp = array[i];

			for (j = i; j >= interval && array[j - interval] > temp; j -= interval)
			{
				array[j] = array[j - interval];
			}

			array[j] = temp;
		}

		interval = (interval - 1) / 3;

		for (i = 0; i < size; i++)
		{
			printf("%d", array[i]);
			if (i < size - 1)
				printf(", ");
		}
		printf("\n");
	}
}
