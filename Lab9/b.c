#include <stdio.h>

struct tipoFiliacao
{
    char nome[80];
    char nomeMae[80];
    char nomePai[80];
};

struct tipoFiliacao separaLinhaCSV(char linha[240])
{
    struct tipoFiliacao nomes;
    int i;
    int contador = 0;

    for (i = 0; linha[i] != ','; i++)
    {
        nomes.nome[i] = linha[i];
        contador++;
    }

    nomes.nome[contador] = '\0';
    contador = 0;

    for (i = i + 1; linha[i] != ','; i++)
    {
        nomes.nomeMae[contador] = linha[i];
        contador++;
    }
    nomes.nomeMae[contador] = '\0';
    contador = 0;

    for (i = i + 1; linha[i] != '\0'; i++)
    {
        nomes.nomePai[contador] = linha[i];
        contador++;
    }
    nomes.nomePai[contador] = '\0';

    return nomes;
}
