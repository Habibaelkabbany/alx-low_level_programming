#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * *add_node_end - adds new node to the end of the list
 * @head: pointer to old linked list
 * @str: string to be duplicated
 *
 * Return: pointer to new list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *last;
	unsigned int count;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	for (count = 0; str[count] != '\0'; count++)
	{
	}
	new->str = strdup(str);
	new->len = count;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	last = *head;
	while ((*last).next != NULL)
	{
		last = (*last).next;
	}
	(*last).next = new;
	return (new);

}
