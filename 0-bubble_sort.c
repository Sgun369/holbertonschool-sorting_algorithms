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
 * bubble_sort - sorts an array of integers in ascending order
 *  using the Bubble sort algorythm
 *
 * @array: array to sort.
 * @size: size of the array.
 * Return: void.
*/
void bubble_sort(int *array, size_t size)
{

	size_t i, j;
	bool swapped;

	for (i = 0; i < size - 1; i++)
	{
		swapped = false;

		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				swapped = true;
				print_array(array, size);
			}
		}
		if (swapped == false)
			break;
	}

}
