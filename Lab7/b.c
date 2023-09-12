#include <stdio.h>
int main()
{
    char t[10000];
    char inv[1000];
    int tam = 0;
    int i = 0;
    int x;
    int y = 0;

    scanf("%s", t);

    //contador do tamanho da string
    for (i; t[i] != '\0'; i++)
    {
        tam++;
    }

    for (x = tam; x >= 0; x--)
    {
        if (t[x] != '\0')
        {
            inv[x] = t[y];
            y++;
        }
    }

    printf("%s\n", inv);

    return 0;
}
