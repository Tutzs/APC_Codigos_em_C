#include <stdio.h>

int main()
{
    char ris[60];
    char vog[60];
    char inve[60];
    int x = 0, z = 0;
    int cont = 0;

    scanf("%s", ris);

    for (int i = 0; ris[i] != '\0'; i++)
    {
        if (ris[i] == 'a' || ris[i] == 'e' || ris[i] == 'i' || ris[i] == 'o' || ris[i] == 'u')
        {
            vog[x] = ris[i];
            x++;
            cont++;
        }
    }

    vog[x] = '\0';

    if (cont == 0)
    {
        printf("Valor invalido!\n");
    }
    else
    {
        cont--;
        for (int j = cont; j >= 0; j--)
        {
            inve[z] = vog[j];
            z++;
        }

        inve[x] = '\0';

        if (strcmp(vog, inve) == 0)
        {
            printf("S\n");
        }
        else
        {
            printf("N\n");
        }
    }

    return 0;
}