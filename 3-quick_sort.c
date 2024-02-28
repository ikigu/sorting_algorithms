#include "sort.h"

/**
 * quick_sort - Sorts an array of ints in ascending order
 * @array: The array of ints to sort
 * @size: The size of @array
 *
 * Return: Nothing
 */

void quick_sort(int *array, size_t size)
{
	quicksort_recursion(array, 0, size - 1, size);
}

/**
 * quicksort_recursion - Recursive quicksort function
 * @array: The array to sort
 * @lo: The first index of the array/subarray
 * @hi: The last index of the array/subarray
 * @size: The size of the array to be sorted
 *
 * Return: Nothing
 */

void quicksort_recursion(int *array, int lo, int hi, size_t size)
{
	int p;

	if (lo >= hi || lo < 0)
	{
		return;
	}

	p = partition(array, lo, hi, size);
	quicksort_recursion(array, lo, p - 1, size);
	quicksort_recursion(array, p + 1, hi, size);
}

/**
 * partition - Swaps array elements before and after pivot element
 * @array: The array being partitiioned
 * @size: The size of the array to be sorted
 * @lo: The first index of @array
 * @hi: The last index of @array
 *
 * Return: The index where pivot ended up being at
 */


int partition(int *array, int lo, int hi, size_t size)
{
	int i, j, pivot, temp;

	pivot = array[hi];
	j = hi - 1;

	for (i = lo; i < hi; i++)
	{
		if (array[i] >= pivot)
		{
			while (j > i)
			{
				if (array[j] < pivot)
				{
					temp = array[i];
					array[i] = array[j];
					array[j] = temp;

					print_array(array, size);
				}

				j++;
			}
		}
	}

	if (j != 0)
	{
		temp = array[j];
		array[j] = pivot;
		array[hi] = temp;

		print_array(array, size);
	}
	
	return (j);
}
