#include <stdio.h>

struct tipoData
{
    int dia;
    int mes;
    int ano;
} tipoData;

struct tipoPessoa
{
    char nome[80];
    struct tipoData dt;
} tipoPessoa;

struct tipoPessoa separaInfo(char nome1[80], int data)
{
    struct tipoPessoa p;
    int i;
    for (i = 0; nome1[i] != '\0'; i++)
    {
        p.nome[i] = nome1[i];
    }
    p.nome[i] = '\0';
    p.dt.dia = data % 100;
    p.dt.mes = (data % 10000) / 100;
    p.dt.ano = data / 10000;
    return p;
}
