#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order
 * @array: the array to sort
 * @size: size of @array
 *
 * Return: Nothing
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, smallest, temp;

	if (size < 2 || !array)
		return;

	for (i = 0; i < size; i++)
	{
		smallest = i;

		for (j = i; j < size; j++)
		{
			if (array[j] < array[smallest])
				smallest = j;
		}

		if (smallest != i)
		{
			temp = array[i];
			array[i] = array[smallest];
			array[smallest] = temp;
			print_array(array, size);
		}
	}
}

