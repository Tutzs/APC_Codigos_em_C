#include <stdio.h>
int main()
{
    int n;
    int vetor[10000]; // vetor
    int x;
    int contador = 0;

    scanf("%d", &n); // tamanho do vetor
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &vetor[i]);
    }
    scanf("%d", &x);

    for (int i = 0; i < n; i++)
    {
        if (x == vetor[i])
        {
            contador++;
        }
    }

    if (contador >= 1)
    {
        printf("pertence\n");
    }
    else
    {
        printf("nao pertence\n");
    }

    return 0;
}