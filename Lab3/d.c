#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n = 0, soma = 0;

    do
    {
        scanf("%d", &n);
        if (n % 2 == 0)
        {
            soma = soma + n;
        }
    } while (n != 0);
    
    printf("%d\n", soma);

    return 0;
}
