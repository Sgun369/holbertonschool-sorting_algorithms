#ifndef _SORTS_
#define _SORTS_
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;


/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size);


/**
 * print_list - Prints a list of integers
 *
 * @list: The list to be printed
 */
void print_list(const listint_t *list);


/**
 * bubble_sort - sorts an array of integers in ascending order
 *  using the Bubble sort algorithme.
 * @array: array to sort.
 * @size: size of the array.
 * Return: void
*/
void bubble_sort(int *array, size_t size);



/**
 * insertion_sort_list - sorts a doubly linked lists of integer
 *  in ascending order
 * using the insertion sort.
 * @list:pointer to the head of a doubly linked list.
 *
 * Return: void.
*/
void insertion_sort_list(listint_t **list);

/*swap function*/
void swap(int *x, int *y);




/**
 * Swaps two nodes in a doubly-linked list
 * @head:  A pointer to the head of the linked list.
 * @node1: A pointer to the first node that needs to be swapped.
 * @node2: A pointer to the second node that needs to be swapped.
 */
void swap_nodes(listint_t **head, listint_t **node1, listint_t *node2);




void selection_sort(int *array, size_t size);

/* a function that sorts an array of using the Quick sort algorithm*/
void quick_sort(int *array, size_t size);

#endif
