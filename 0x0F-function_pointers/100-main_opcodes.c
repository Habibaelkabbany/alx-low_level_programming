#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "3-calc.h"

/**
 * main - prints the name of the program
 *@argc: count of argmunets
 *@argv: array of arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int bytes, i;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	arr = (char *)main;
	for (i = 0; i < bytes; i++)
	{
		if (i == bytes - 1)
		{
			printf("%02hhx\n", arr[i]);
			break;
		}
		printf("%02hhx ", arr[i]);
	}
	return (0);
}

