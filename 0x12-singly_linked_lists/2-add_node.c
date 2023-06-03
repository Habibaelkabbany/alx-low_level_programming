#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * *add_node - adds new node at beginning of list
 * @head: pointer to old linked list
 * @str: string to be duplicated
 *
 * Return: pointer to new list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
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
	new->next = *head;
	*head = new;
	return (*head);

}
