#include <stdio.h>

void swap(int *a, int *b)
{
    int x;
    x = *a;
    *a = *b;
    *b = x;
}
