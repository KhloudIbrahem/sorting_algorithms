#include "sort.h"
/**
 * selection_sort - sorts an array of integers
 * in ascending order using the Selection sort algorithm.
 * @array: array of integers.
 * @size: size of the array.
 * Return: Nothing.
 */
void selection_sort(int *array, size_t size)
{
	size_t x;
	size_t y;
	size_t first;
	int temper;

	if (size == 0 || array == NULL)
		return;
	for (x = 0; x < size - 1; x++)
	{
		first = x;
		for (y = x + 1; y < size; y++)
		{
			if (array[y] < array[first])
			{
				first = y;
			}

		}
		if (first != x)
		{
			temper = array[first];
			array[first] = array[x];
			array[x] = temper;
			print_array(array, size);
		}
	}
}
