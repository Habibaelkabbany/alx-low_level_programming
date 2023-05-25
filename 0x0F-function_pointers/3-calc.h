#ifndef CALC_H
#define CALC_H
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);
void print_diagsums(int *a, int size);
void set_string(char **s, char *to);
unsigned int count(char *s1);

#endif
