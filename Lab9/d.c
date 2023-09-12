#include <stdio.h>
#include <string.h>

/*int comparacao(char str[], char str2[])
{
    // Nós assumimos que a string é real.
    int igual = 1;

    // Verificar se palavra, P[j] é igual a P[i].
    // Fazemos um loop e verificamos caracter por caracter.
    for (int s = 0, p = 0; str[s] != '\0' || str2[p] != '\0'; s++, p++)
    {

        // Verificar se esse caracter da string é o mesmo caracter da outro stringo.
        if (str[s] != str2[p])
        {
            // Se não for igual, mudamos a verificação `igual = 0` e paramos o loop com o `break`.
            igual = 0;
            break;
        }
    }

    // Se for igual, retornar 0.
    if (igual)
        return 0;

    // Não é igual, retorna 1.
    else
        return 1;
}*/

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
    int i, a;
    int check = 0;
    // Quantidade de bandas
    for (i = 0; i < n; i++)
    {
        // Musica de cada banda
        for (a = 0; a < bandas[i].qtd; a++)
        {
            if (strcmp(pesquisa, bandas[i].musicas[a].nome) == 0)
            {
                check = 1;
                printf("%s : ano %d\n", bandas[i].nome, bandas[i].musicas[a].ano);
            }
        }
    }

    if (check == 0)
    {
        printf("Musica nao cadastrada\n");
    }
}