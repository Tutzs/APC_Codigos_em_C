#include <stdio.h>
int main()
{
    char t[1000];
    int n, i, x;
    int cont = 0;
    int vetor[1000];
    int maior;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%s", t);
        for (x = 0; t[x] != '\0'; x++)
        {
            cont++;
        }
        vetor[i] = cont;
        cont = 0;
    }

    maior = vetor[0];

    for (i = 1; i < n; i++)
    {
        if (vetor[i] > maior)
        {
            maior = vetor[i];
        }
    }

    printf("%d\n", maior);

    return 0;
}