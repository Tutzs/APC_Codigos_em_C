#include <stdio.h>
#include <string.h>

struct tipoMusica
{
    char nome[80];
    int ano;
};

struct tipoBanda
{
    char nome[80];
    int qtd;
    struct tipoMusica musicas[100];
};
void pesquisarNomeMusica(char pesquisa[80], struct tipoBanda bandas[50], int n)
{
    int i;
    int j;
    int contador = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < bandas[i].qtd; j++)
        {
            if (strcmp(pesquisa, bandas[i].musicas[j].nome) == 0)
            {
                contador = 1;
                printf("%s : ano %d\n", bandas[i].nome, bandas[i].musicas[j].ano);
            }
        }
    }
    if(contador == 0)
    {
        printf("Musica nao cadastrada\n");
    }
}
