#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - counts number of elements in list
 * @h: linked list
 *
 * Return: Number of elements.
 */
size_t list_len(const list_t *h)
{
	unsigned int i;

	i = 0;
	if (h == NULL)
	{
		return (i);
	}
	return (print_list_helper(h, i));
}
/**
 * print_list_helper - counts number of elements in list
 * @h: linked list
 * @num: counter
 *
 * Return: Number of elements.
 */
size_t print_list_helper(const list_t *h, unsigned int num)
{
	if ((*h).next == NULL)
	{
		num++;
		return (num);
	}
	else
	{
		num++;
		return (print_list_helper((*h).next, num));
	}
}
