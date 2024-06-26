#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H
#include <stdio.h>
#include <stddef.h>

int binary_search(int *array, size_t size, int value);
int linear_search(int *array, size_t size, int value);
int recursive_search(int *array, size_t size, int value);
#endif
