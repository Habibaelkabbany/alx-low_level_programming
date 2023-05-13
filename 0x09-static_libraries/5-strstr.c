#include "main.h"
#include <stdio.h>
/**
 * *_strstr - gets substring of accept in s
 *@haystack: pointer to start of string
 *@needle: pointer to start of reference string
 *
 * Return: pointer to beginning of substring
 */

char *_strstr(char *haystack, char *needle)
{
unsigned int i;
char current;
int j;

current = haystack[0];
for (i = 0; current != '\0'; i++)
{
	current = haystack[i];
	j = 0;

	while (current == needle[j] && (current != '\0' && needle[j] != '\0'))
	{
		j++;
		current = haystack[i + j];
	}
	if (needle[j] == '\0')
	{
		return (&haystack[i]);
	}
}
return (NULL);
}
