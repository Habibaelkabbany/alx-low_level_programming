#include "main.h"
/**
 * *print_chessboard - prints 2d array
 *@a: pointer to start of 2d array
 */

void print_chessboard(char (*a)[8])
{
unsigned int i;
unsigned int j;

for (i = 0; i < 8; i++)
{
	for (j = 0; j < 8; j++)
	{
		_putchar(a[i][j]);
	}
_putchar('\n');
}
}
