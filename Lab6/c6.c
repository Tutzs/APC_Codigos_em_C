#include <stdio.h>
int main()
{
    int n;
    int vetor[10000]; // vetor
    scanf("%d", &n);  // tamanho do vetor
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (vetor[i] % 2 == 0)
        {
            printf("%d ", vetor[i]);
        }
    }

    printf("\n");

    for (int i = 0; i < n; i++)
    {
        if (vetor[i] % 2 != 0)
        {
            printf("%d ", vetor[i]);
        }
    }

    return 0;
}