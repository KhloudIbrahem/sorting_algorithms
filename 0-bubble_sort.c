#include "sort.h"
/**
 * bubble_sort - sorts an array of integers
 * in ascending order using the Bubble sort algorithm.
 * @array: The array of integers.
 * @size: The size of array.
 * Return: Nothing.
 */
void bubble_sort(int *array, size_t size)
{
	size_t x;
	size_t y;
	int temper;

	for (x = 0; x < size; x++)
	{
		for (y = 0; y < size - 1; y++)
		{
			if (array[y] > array[y + 1])
			{
				temper = array[y];
				array[y] = array[y + 1];
				array[y + 1] = temper;
				print_array(array, size);
			}
		}
	}
}
