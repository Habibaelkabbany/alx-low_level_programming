#include "main.h"
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>

/**
 * *_realloc - a function that reallocates a memory block using malloc and free
 * @ptr: ptr to old reserved space
 * @old_size: size of old reserved space
 * @new_size: size of new reseved space
 *
 * Return: pointer to a reserved memory.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
if (new_size == 0 && ptr != NULL)
{
	free(ptr);
	return (NULL);
}
if (new_size > old_size)
{
	free(ptr);
	ptr = malloc(new_size);
}
if (ptr == NULL)
{
	ptr = malloc(new_size);
}
return (ptr);
}
