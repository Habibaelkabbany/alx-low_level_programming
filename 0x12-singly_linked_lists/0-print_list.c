#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - counts number of elements in list
 * @h: linked list
 *
 * Return: Number of elements.
 */
size_t print_list(const list_t *h)
{
	unsigned int i;

	i = 0;
	if (h == NULL)
	{
		printf("[0] (nil)\n");
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
		if ((*h).str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", (*h).len, (*h).str);
		}
		num++;
		return (num);
	}
	else
	{
		if ((*h).str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", (*h).len, (*h).str);
		}
		num++;
		return (print_list_helper((*h).next, num));
	}
}
