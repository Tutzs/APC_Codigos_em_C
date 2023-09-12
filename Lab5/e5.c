#include <stdio.h>
int contarEstrelas(int qtd, int abertura) // qtd de estrelas, abertura do microscopio
{
    int f; // fótons
    int soma = abertura * f;
    int estrelas = 0;
    for (int i = 0; i < qtd; i++)
    {
        scanf("%d", &f);

        if (soma >= 40000000)
        {
            estrelas++;
        }
    }
    return estrelas;
}