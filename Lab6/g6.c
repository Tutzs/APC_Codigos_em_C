#include <stdio.h>
int main()
{
    int n;
    int a[10000], b[10000]; // vetores
    int contador = 0;

    scanf("%d", &n); // tamanho do vetor

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] == b[i])
        {
            contador++;
        }
        else
        {
            if (a[i] != b[i])
            {
                contador--;
            }
        }
    }

    if (contador > 1)
    {
        printf("sim\n");
    }
    else
    {
        printf("nao\n");
    }

    return 0;
}