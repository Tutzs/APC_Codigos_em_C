#include <stdio.h>

void min(char str[])
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
    }
}

int main()
{
    char nome[100];
    char pnome[100];
    char ultnome[100];
    int i, x;
    int z = 0;
    int tamt = 0;
    int tam = 0;

    scanf("%[^\n]s", nome);
    min(nome);

    for (i = 0; nome[i] != ' '; i++)
    {
        pnome[i] = nome[i];
    }

    pnome[i] = '\0';

    for (i = 0; nome[i] != '\0'; i++)
    {
        tamt++;
        if (nome[i] == ' ')
        {
            tam = 0;
        }
        else
        {
            tam++;
        }
    }

    tamt = tamt - tam;

    for (x = tamt; nome[x] != '\0'; x++)
    {
        ultnome[z] = nome[x];
        z++;
    }
    ultnome[z] = '\0';

    printf("%s.%s@unb.br\n", pnome, ultnome);

    return 0;
}