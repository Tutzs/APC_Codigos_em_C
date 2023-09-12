#include <stdio.h>

int comparacao(char str[], char str2[]);

int main(int argc, char const *argv[])
{
    int N, M;
    int contador = 0;

    scanf("%d %d", &N, &M);

    char palavras[N][1000];
    char palavras2[M][1000];

    for (int i = 0; i < N; i++)
    {
        scanf("%s", palavras[i]);
    }

    for (int j = 0; j < M; j++)
    {
        scanf("%s", palavras2[j]);
    }

    for (int L = 0; L < N; L++)
    {
        for (int C = 0; C < M; C++)
        {
            if (comparacao(palavras[L], palavras2[C]) == 0)
            {
                contador++;
            }
        }
    }

    if (contador == 0)
    {
        printf("0\n");
    }
    else
    {
        printf("1\n");
    }

    return 0;
}

int comparacao(char str[], char str2[])
{
    int igual = 1;

    for (int a = 0, b = 0; str[a] != '\0' || str2[b] != '\0'; a++, b++)
    {
        if (str[a] != str2[b])
        {
            igual = 0;
            break;
        }
    }

    if (igual == 1)
        return 0;
    else
        return 1;
}