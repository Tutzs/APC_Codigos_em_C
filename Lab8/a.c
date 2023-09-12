#include <stdio.h>

int main()
{
    int n;
    int soma = 0;
    int posicao = 0;
    int maior = 0;
    int a = 0;

    scanf("%d", &n);
    // getchar();

    int mat[n][n];
    
    for (int i = 0; i < n; i++)
    {
        for (int x = 0; x < n; x++)
        {
            scanf("%d", &mat[i][x]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int x = 0; x < n; x++)
        {
            soma += mat[x][i];
        }
        if (soma > maior)
        {
            maior = soma;
            posicao = i;
            a++;
        }
        soma = 0;
    }

    if (a == 0)
    {
        printf("%d\n", a);
    }
    else
    {
        printf("%d\n", posicao + 1);
    }

    return 0;
}