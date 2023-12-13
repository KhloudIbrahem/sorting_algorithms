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
	size_t i = 0;
	size_t j = 0;
	int temper;

	for (; i < size; i++)
	{
		for (; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temper = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temper;
				print_array(array, size);
			}
		}
	}
}
