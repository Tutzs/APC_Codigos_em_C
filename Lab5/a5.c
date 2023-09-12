#include <stdio.h>
// p = parcela, op = operaçao
int faz_conta_direito(int p, char op)
{
    int somasub, n;

    scanf("%d", &somasub);

    if (op == '+')
    {
        for (int i = 1; i < p; i++)
        {
            scanf("%d", &n);
            somasub += n;
        }
    }
    if (op == '-')
    {
        for (int i = 1; i < p; i++)
        {
            scanf("%d", &n);
            somasub -= n;
        }
    }

    return somasub;
}

