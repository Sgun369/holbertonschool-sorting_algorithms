#include "sort.h"

/**
 * swap - swaps two integer.
 * @x: integer to swap.
 * @y: integer to swap.
 * Return: void.
*/
void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}
/**
 * selection_sort - sorts an array of integers in ascending order
 * using the selection sort algorithm.
 * @array: array to sort.
 * @size: size of the arrray.
 *Return: void.
*/
void selection_sort(int *array, size_t size)
{
	size_t i, j, min;
	


	for (i = 0; i < size - 1; i++)
	{
		min = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
			{
				min = j;
			}
		}
		if (min != i)
		{
			swap(&array[i], &array[min]);
			print_array(array, size);
		}
		

	}
	return ;
}
