#include <stdio.h>
int main()
{
    int n;  // numeros
    int vl; // valores lidos
    int vetor[10000];
    int menorind = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (vetor[menorind] > vetor[i])
        {
            menorind = i;
        }
    }
    printf("%d\n", menorind);

    return 0;
}