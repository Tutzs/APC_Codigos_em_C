#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, valores, soma;
    soma = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &valores);
        soma = soma + valores;
    }
    
    printf("%d\n", soma);
    return 0;
}
