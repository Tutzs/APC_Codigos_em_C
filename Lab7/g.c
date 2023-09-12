#include <stdio.h>

int ordenado(char str[])
{
    int contador = 0;
    int letras = 0;

    for (int i = 0; str[i] < str[i + 1]; i++)
    {
        contador++;
    }
    for (int a = 0; str[a] != '\0'; a++)
    {
        letras++;
    }
    if (contador == letras - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void minusculo(char str[])
{
    for (int i = 0; i < str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
    }
}

int main()
{
    int qnts;
    char strings[45];

    scanf("%d", &qnts);
    // Laço de quantidade que está dando infinito//
    for (int i = 0; i < qnts; i++)
    {
        scanf("%s", strings);
        minusculo(strings);

        if (ordenado(strings) == 1)
        {
            printf("%s: O\n", strings);
        }
        else if (ordenado(strings) == 0)
        {
            printf("%s: N\n", strings);
        }
        strings[0] = '\0';
    }

    return 0;
}