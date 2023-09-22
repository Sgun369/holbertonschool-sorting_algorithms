# include "sort.h"
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
 * lomuto_partition - partitions the array using lomuto partition scheme.
 * @array: the array to be sorted.
 * @low: the index of the lower boound.
 * @hight: the index of the upper bound.
 * @size: the size of the array.
 * Return: the index of the pivot element after partitioning.
*/
int lomuto_partition(int *array, int low, int hight, size_t size)
{
	int pivot = array[hight];
	int i = low - 1;
	int j;

	for (j = low; j < hight; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			swap(&array[i], &array[j]);
			if (i != j)
				print_array(array, size);
		}
	}
	swap(&array[i + 1], &array[hight]);
	if (i + 1 != hight)
		print_array(array, size);

			return (i + 1);
}
/**
 * quicksort_recursive - recursively sorts an array using quick sort.
 * @array: the array to be sorted.
 * @low: the index of the lower bound.
 * @high: the index of the upper bound.
 * @size: size of the array.
*/
void quicksort_recursive(int *array, int low, int high, size_t size)
{
	if (low < high)
	{
		int pivot = lomuto_partition(array, low, high, size);

		quicksort_recursive(array, low, pivot - 1, size);
		quicksort_recursive(array, pivot + 1, high, size);
	}
}
/**
 * quick_sort - sorts an array of integers in ascendinng order
 * using the quick sort algorithm.
 * @array: arrray to srt.
 * @size: sizze of the array.
 * Return: void
*/
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	quicksort_recursive(array, 0, size - 1, size);
}
