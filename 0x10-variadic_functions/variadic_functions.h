#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

int sum_them_all(const unsigned int n, ...);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);
void print_diagsums(int *a, int size);
void set_string(char **s, char *to);
unsigned int count(char *s1);

#endif
