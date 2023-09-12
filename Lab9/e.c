#include <stdio.h>
struct tipoLogradouro
{
    char tipo[80];
    char nome[80];
    char complemento[80];
};

void criaLinhaCSV(struct tipoLogradouro info, char linha[240])
{
    int i;
    int cont = 0;
    for (i = 0; info.tipo[i] != '\0'; i++)
    {
        linha[i] = info.tipo[i];
    }

    linha[i] = ';';

    for (i += 1; info.nome[cont] != '\0'; i++)
    {
        linha[i] = info.nome[cont];
        cont++;
    }

    linha[i] = ';';
    cont = 0;

    for (i += 1; info.complemento[cont] != '\0'; i++)
    {
        linha[i] = info.complemento[cont];
        cont++;
    }

    linha[i] = '\0';
}