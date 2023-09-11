#include <stdio.h>
int main()
{
    int restaurante, cod, nota;
    int dia, maiornota, maiorcod;

    dia = 1;
    while (scanf("%d", &restaurante) != EOF)
    {
        maiorcod = maiornota = -1;
        for (int i = 0; i < restaurante; i++)
        {
            scanf("%d %d", &cod, &nota);
            if (nota > maiornota || nota == maiornota && cod < maiorcod)
            {
                maiornota = nota;
                maiorcod = cod;
            }
        }
        printf("Dia %d\n%d\n\n", dia, maiorcod);
        dia++;
    }

    return 0;
}