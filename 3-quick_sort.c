#include "sort.h"
/**
 * swaping - Swaping two elements.
 * @arrs: The array of elements.
 * @x: first element.
 * @y: second element.
 * Return: Nothing.
 */
void swaping(int *arrs, int x, int y)
{
	int tmp1;

	tmp1 = arrs[x];
	arrs[x] = arrs[y];
	arrs[y] = tmp1;
}

/**
 * partitioning - Divided into parts.
 * @arrs2: The array of elements.
 * @begin: The start.
 * @ending: The end.
 * Return: the starting element of [x].
 */
int partitioning(int *arrs2, int begin, int ending)
{
	int piv;
	int x;
	int y;
	static int size;
	static int temper;

	x = begin;
	piv = arrs2[ending];
	if (temper == 0)
	{
		size = ending + 1;
		temper++;
	}
	for (y = begin; y < ending; y++)
	{
		if (arrs2[y] <= piv)
		{
			if (x != y)
			{
				swaping(arrs2, x, y);
				print_array(arrs2, size);
			}
			x++;
		}
	}
	if (x != ending)
	{
		swaping(arrs2, x, ending);
		print_array(arrs2, size);
	}
	return (x);
}

/**
 * sorting - Sorting the array of elements.
 * @arrs3: The array of elements.
 * @begin: The starting.
 * @ending: The end.
 * Return: Nothing.
 */
void sorting(int *arrs3, int begin, int ending)
{
	int piv;

	if (begin < ending)
	{
		piv = partitioning(arrs3, begin, ending);
		sorting(arrs3, begin, piv - 1);
		sorting(arrs3, piv + 1, ending);
	}
}

/**
 * quick_sort - sorts an array of integers
 * in ascending order using the Quick sort algorithm.
 * @array: The array of integers.
 * @size: size of the array.
 * Return: Nothing.
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	sorting(array, 0, size - 1);
}
