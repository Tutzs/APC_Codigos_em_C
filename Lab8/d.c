#include <stdio.h>

int main()
{

    // Inteiros//
    int f;
    int l;
    char c;
    int n;
    int contador = 0;
    // Char//
    // char letra;
    // Input de lugares e fileiras//

    scanf("%d", &f);
    scanf("%d", &l);
    getchar();

    int fileira[f + 1][l + 1];

    // Input de entrada

    while (scanf("%c %d", &c, &n) != EOF)
    {
        n--;
        c = c - 65;
        fileira[c][n] = -1;
        n = 0;
        c = 0;
        contador++;
    }

    // Printar//
    printf("  ");

    for (int i = 1; i <= l; i++)
    {
        printf("%0.2d ", i);
    }

    printf("\n");

    f--;

    for (int i = f; i >= 0; i--)
    {
        printf("%c ", i + 65);

        for (int j = 0; j < l; j++)
        {
            if (fileira[i][j] == -1)
                printf("XX ");
            else
                printf("-- ");
        }
        printf("\n");
    }

    return 0;
}