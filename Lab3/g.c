#include <stdio.h>

int main()
{

    int L, M;
    int i, x;

    scanf("%d %d", &L, &M);
    for (i = 0; i < L; i++)
    {
        for (x = 0; x < M; x++)
        {
            printf("[%03d,%03d]", i, x);
        }
        printf("\n");
    }

    return 0;
}