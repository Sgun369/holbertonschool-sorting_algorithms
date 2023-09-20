#include "sort.h"
/**
 * selection_sort - sorts an array of integers in ascending order
 * using the selection sort algorithm.
 * @array: array to sort.
 * @size: size of the arrray.
 *Return: void.
*/
void selection_sort(int *array, size_t size)
{
	size_t i, j, n, min;
	int temp = 0;
	

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
			temp = array[i];
			array[i] = array[min];
			array[min] = temp;
		}
		
		for (n = 0; n < size; n++)
		{
			if (n != 0)
			printf(", ");
			printf("%d", array[n]);
		}
		printf("\n");
		
	}
	return;
}