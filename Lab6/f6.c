#include <stdio.h>
int main()
{
    int n;
    int a[10000], b[10000];
    int soma;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }

    for (int x = 0; x < n; x++)
    {
        soma = a[x] + b[x];
        printf("%d ", soma);
    }

    return 0;
}