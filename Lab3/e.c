#include <stdio.h>

int main()
{
    int n, i, j, k;

    scanf("%d", &n);
    printf("\n");

    /* Pirâmide 1 */
    for (k = 1; k <= n; k++)
    {
        for (i = 1; i <= k; i++)
        {
            printf("%02d ", k);
        }
        printf("\n");
    }

    printf("\n"); // Quebra de linha entre pirâmides

    /* Pirâmide 2 */
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%02d ", j);
        }
        printf("\n");
    }

    return 0;
}
