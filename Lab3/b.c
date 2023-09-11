#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, valores, maiornumero;
    scanf("%d", &n);
    scanf("%d", &maiornumero);

    for (int i = 1; i < n; i++)
    {
        scanf("%d", &valores);
        if (valores > maiornumero)
        {
            maiornumero = valores;
        }
    }
    
    printf("%d\n", maiornumero);
    return 0;
}
