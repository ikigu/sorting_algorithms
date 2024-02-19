#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending order
 *
 * @array: An array of integers to sort
 * @size: The size of @array
 */

void bubble_sort(int *array, size_t size)
{
	int temp;

	size_t i = 0;
	size_t j = 0;
	short swap_done = 0;

	if (size < 2)
	{
		return;
	}

	while (1)
	{
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i + 1];
				array[i + 1] = array[i];
				array[i] = temp;

				swap_done = 1;
				print_array(array, size);
			}
		}

		if (!swap_done)
		{
			break;
		}
		else
		{
			swap_done = 0;
		}

		j++;
	}
}
