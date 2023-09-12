#include <stdio.h>
int main()
{
    int n;
    int vetor[10000];
    int m; // media
    int contador;
    int soma = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &vetor[i]);
        soma += vetor[i];
    }

    m = soma / n;

    for (int i = 0; i < n; i++)
    {
        if (vetor[i] > m)
        {
            printf("%d ", vetor[i]);
            contador++;
        }
    }

    if (contador < 1)
    {
        printf("0");
    }
    
    printf("\n");
    return 0;
}
