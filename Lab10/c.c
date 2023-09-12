#include <stdio.h>

int verifica(char str[], char letra)
{
    int contador = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == letra)
        {
            contador = 1;
        }
    }
    if (contador == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    char lt;        // char letra
    char txt[1000]; // texto
    double div;
    double res = 0;
    int contlt = 0, conttxt = 0, check = 0; // contador de letras e de texto
    int i, a;
    char palavra[100];

    scanf("%c\n", &lt);
    fgets(txt, 1000, stdin);

    for (i = 0; txt[i] != '\0'; i++)
    {
        /*if (lt == txt[i])
        {
            contlt++;
        }*/
        if (txt[i] == ' ')
        {
            conttxt++;
        }
    }

    conttxt += 1;
    // printf("%d %d\n", contlt, conttxt);

    for (int x = 0; x < conttxt; x++)
    {
        // no meio do caminho tinha uma pedra tinha uma pedra no meio do caminho
        for (a = 0; txt[check] != ' '; a++)
        {
            palavra[a] = txt[check];
            check++;
        }

        check++;
        palavra[a] = '\0';

        if (verifica(palavra, lt) == 1)
        {
            res++;
        }
    }
    // printf("%d\n", res);

    div = 100 * res / conttxt;

    printf("%.1lf\n", div);
    return 0;
}