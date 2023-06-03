#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
    //char s[10] = argv[1];

    printf("%s\n", argv[1]);
    rev_string(argv[1]);
    printf("%s\n", argv[1]);
    return (0);
}
