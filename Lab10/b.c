#include <stdio.h>
int main()
{
    int n;
    int cont = 1;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int x = 0; x < cont; x++)
        {
            printf("*");
        }
        cont += 2;
        printf("\n");
    }

    return 0;
}