#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "main.h"

int main(void)
{
    char *u;
    int *i;
    float *f;
    double *d;

    u = malloc_checked(sizeof(char) * 1024);
    printf("u: %p\n", (void *)u);
    i = malloc_checked(sizeof(int) * 402);
    printf("i: %p\n", (void *)i);
    f = malloc_checked(sizeof(float) * 100000000);
    printf("f: %p\n", (void *)f);
    d = malloc_checked(INT_MAX);
    printf("d: %p\n", (void *)d);

    free(u);
    free(i);
    free(f);
    free(d);
    return (98);
}
